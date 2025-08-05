#include <stdio.h>
#include <stdint.h>
#include <string.h>

#pragma pack(push, 1)
typedef struct {
    uint16_t uht;
    uint16_t ctb;
    uint16_t r_uht;
    uint16_t r_cap;
    uint8_t ccf_max;
    uint8_t file_version : 6;
    uint8_t Imax;
    uint8_t Uin;
    uint8_t t0;
    uint8_t t1;
    uint8_t t2;
    uint8_t t3;
    uint8_t t4;
    uint8_t t5;
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

void write_csv_header(FILE *csv) {
    fprintf(csv, "UHT,CTB,R_UHT,R_CAP,CCF,Ver,Imax,Uin,t0,t1,t2,t3,t4,t5,Microsec,Serial,ShotPt,Line,");
    fprintf(csv, "Data0,Data1,Data2,...,Data1999\n");  // Сокращённый заголовок для данных
}

void write_record_to_csv(FILE *csv, const Record *rec) {
    // Основные поля
    fprintf(csv, "%.1f,%.1f,%.1f,%.1f,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%d,%u,",
            rec->uht / 10.0f,
            rec->ctb / 10.0f,
            rec->r_uht / 10.0f,
            rec->r_cap / 10.0f,
            rec->ccf_max,
            rec->file_version,
            rec->Imax,
            rec->Uin,
            rec->t0,
            rec->t1,
            rec->t2,
            rec->t3,
            rec->t4,
            rec->t5,
            rec->microsec,
            rec->serial_number,
            rec->shot_point,
            rec->line_number);

    // Первые 3 значения из data для примера
    for (int i = 0; i < 3; i++) {
        fprintf(csv, "%d,", rec->data[i]);
    }
    fprintf(csv, "...\n");  // Пропускаем остальные 1997 значений для краткости
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

    // Записываем заголовок CSV
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