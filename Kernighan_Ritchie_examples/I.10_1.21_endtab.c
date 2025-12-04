#include <stdio.h>
#define TAB 8  // Стопы табуляции (каждые 8 символов)

void entab(const char line[]);
int get1line(char line[], int lim);

int main() {
    char line[1000];
    printf("Введите строку (пробелы -> табы):\n");
    while (get1line(line, 1000) > 0) {
        printf("Исходная:\n ");
        for (int i = 0; line[i]; i++) {
            if (line[i] == ' ') printf("·");  // Пробелы как ·
            else if (line[i] == '\t') printf("[TAB]");
            else putchar(line[i]);
        }
        printf("\nОбработанная:\n ");
        entab(line);  // Выводим с визуализацией
        printf("\n");
    }
    return 0;
}

int get1line(char line[], int lim) {
    int i, c;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') line[i++] = c;
    line[i] = '\0';
    return i;
}

void entab(const char line[]) {
    int spacecount = 0;
    int pos = 0;

    for (int i = 0; line[i]; ++i) {
        if (line[i] == ' ') {
            spacecount++;
            pos++;
            if (pos % TAB == 0) {
                printf("[TAB]");  // Визуализация таба
                spacecount = 0;
            }
        } else {
            // Печатаем оставшиеся пробелы (если не хватило для таба)
            while (spacecount > 0) {
                printf("·");
                spacecount--;
            }
            putchar(line[i]);
            if (line[i] == '\t') {
                pos += (TAB - (pos % TAB));
            } else {
                pos++;
            }
        }
    }
    // Печатаем оставшиеся пробелы в конце строки
    while (spacecount > 0) {
        printf("·");
        spacecount--;
    }
}
