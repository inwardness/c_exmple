#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <time.h>

#pragma pack(push, 1)
typedef struct {
    uint16_t uht;
    uint16_t ctb;
    uint16_t r_uht;
    uint16_t r_cap;
    uint8_t ccf_max;
    uint8_t file_version : 6;
    uint8_t : 2; // Выравнивание оставшихся 2 бит
    uint8_t Imax;
    uint8_t Uin;
    uint8_t t0;  // День
    uint8_t t1;  // Месяц
    uint8_t t2;  // Год (год - 2000)
    uint8_t t3;  // Часы
    uint8_t t4;  // Минуты
    uint8_t t5;  // Секунды
    uint32_t microsec;
    uint32_t serial_number;
    uint32_t shot_point;
    int32_t SP_step;
    uint32_t line_number;
    uint32_t file_cnt;
    uint16_t mode;
    uint16_t language;
    uint16_t compatibility;
    uint16_t gph_type;
    uint16_t shot_by_PPS;
    uint16_t det_type;
    uint16_t high_voltage;
    uint16_t ccf_threshold;
    uint16_t private_code;
    uint16_t fire_delay;
    uint16_t radio_delay;
    uint16_t radio_ampl;
    uint16_t CTB_max;
    uint16_t UHT_min;
    uint16_t UHT_mode;
    uint16_t UHT_test;
    uint16_t time_zone;
    uint16_t time_slot;
    uint16_t shooter_amount;
    int16_t r0_uh;
    int16_t r0_cap;
    int16_t adc_null;
    char gga[128];
    uint16_t det_info;
    uint32_t det_number;
    uint16_t shift;
    uint16_t noise;
    int16_t data[2000];
} Record;
#pragma pack(pop)

void bytes_to_datetime(uint8_t t0, uint8_t t1, uint8_t t2,
                      uint8_t t3, uint8_t t4, uint8_t t5,
                      char* output) {
    struct tm timeinfo = {0};
    timeinfo.tm_mday = t0;
    timeinfo.tm_mon = t1 - 1;
    timeinfo.tm_year = 100 + t2; // 2000 + (t2)
    timeinfo.tm_hour = t3;
    timeinfo.tm_min = t4;
    timeinfo.tm_sec = t5;
    timeinfo.tm_isdst = -1;
    
    strftime(output, 20, "%Y-%m-%d %H:%M:%S", &timeinfo);
}

void write_csv_header(FILE *csv) {
    fprintf(csv, "DateTime,UHT,CTB,R_UHT,R_CAP,CCF,Ver,Imax,Uin,"
                 "Microsec,Serial,ShotPt,SP_step,Line,FileCnt,Mode,"
                 "Language,Compatibility,GphType,ShotByPPS,DetType,"
                 "HighVoltage,CCFThresh,PrivateCode,FireDelay,"
                 "RadioDelay,RadioAmpl,CTB_max,UHT_min,UHT_mode,"
                 "UHT_test,TimeZone,TimeSlot,ShooterAmount,"
                 "r0_uh,r0_cap,adc_null,GGA,DetInfo,DetNumber,"
                 "Shift,Noise,Data0,Data1,Data2\n");
}

void write_record_to_csv(FILE *csv, const Record *rec) {
    char datetime[20];
    bytes_to_datetime(rec->t0, rec->t1, rec->t2, rec->t3, rec->t4, rec->t5, datetime);
    
    fprintf(csv, "\"%s\",%.1f,%.1f,%.1f,%.1f,%d,%d,%d,%d,"
                 "%u,%u,%d,%d,%u,%u,"
                 "%hu,%hu,%hu,%hu,%hu,"
                 "%hu,%hu,%hu,%hu,%hu,"
                 "%hu,%hu,%hu,%hu,%hu,"
                 "%hu,%hu,%hu,%hu,"
                 "%hd,%hd,%hd,\"%.128s\",%hu,%u,"
                 "%hu,%hu,%hd,%hd,%hd\n",
            datetime,
            rec->uht / 10.0f,
            rec->ctb / 10.0f,
            rec->r_uht / 10.0f,
            rec->r_cap / 10.0f,
            rec->ccf_max,
            rec->file_version,
            rec->Imax,
            rec->Uin,
            rec->microsec,
            rec->serial_number,
            rec->shot_point,
            rec->SP_step,
            rec->line_number,
            rec->file_cnt,
            rec->mode,
            rec->language,
            rec->compatibility,
            rec->gph_type,
            rec->shot_by_PPS,
            rec->det_type,
            rec->high_voltage,
            rec->ccf_threshold,
            rec->private_code,
            rec->fire_delay,
            rec->radio_delay,
            rec->radio_ampl,
            rec->CTB_max,
            rec->UHT_min,
            rec->UHT_mode,
            rec->UHT_test,
            rec->time_zone,
            rec->time_slot,
            rec->shooter_amount,
            rec->r0_uh,
            rec->r0_cap,
            rec->adc_null,
            rec->gga,
            rec->det_info,
            rec->det_number,
            rec->shift,
            rec->noise,
            rec->data[0],
            rec->data[1],
            rec->data[2]);
}

int main() {
    const char *input_filename = "_76.ucr";
    const char *output_filename = "output.csv";

    FILE *input = fopen(input_filename, "rb");
    if (!input) {
        perror("Failed to open input file");
        return 1;
    }

    FILE *output = fopen(output_filename, "w");
    if (!output) {
        perror("Failed to create output file");
        fclose(input);
        return 1;
    }

    // Записываем UTF-8 BOM и заголовок
    fputs("\xEF\xBB\xBF", output); // BOM для корректного отображения в Excel
    write_csv_header(output);

    Record rec;
    while (fread(&rec, sizeof(Record), 1, input) == 1) {
        write_record_to_csv(output, &rec);
    }

    fclose(input);
    fclose(output);

    printf("Конвертация завершена. Результат сохранён в %s\n", output_filename);
    return 0;
}