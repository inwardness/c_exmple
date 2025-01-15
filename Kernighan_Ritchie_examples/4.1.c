#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000  // Максимальная длина входного текста

void printWrappedText(const char *text, int n) {
    int i = 0;
    int lastSpace = -1;  // Индекс последнего пробела или табуляции
    int lineStart = 0;   // Начало текущей строки

    while (text[i] != '\0') {
        // Если текущий символ — пробел или табуляция, запоминаем его индекс
        if (text[i] == ' ' || text[i] == '\t') {
            lastSpace = i;
        }

        // Если достигли n-й позиции
        if (i >= n) {
            // Если есть пробел или табуляция, переносим строку
            if (lastSpace != -1) {
                // Печатаем от начала строки до последнего пробела
                for (int j = lineStart; j < lastSpace; j++) {
                    putchar(text[j]);
                }
                putchar('\n');  // Перенос строки
                lineStart = lastSpace + 1;  // Обновляем начало новой строки
                lastSpace = -1;  // Сбрасываем индекс последнего пробела
            } else {
                // Если пробелов нет, переносим по текущему символу
                for (int j = lineStart; j <= i; j++) {
                    putchar(text[j]);
                }
                putchar('\n');  // Перенос строки
                lineStart = i + 1;  // Обновляем начало новой строки
            }
        }

        i++;
    }

    // Печатаем оставшуюся часть текста, если она есть
    if (lineStart < i) {
        for (int j = lineStart; j < i; j++) {
            putchar(text[j]);
        }
        putchar('\n');  // Перенос строки
    }
}

int main() {
    char input[MAX_LENGTH];
    int n;

    printf("Введите максимальную длину строки (n): ");
    scanf("%d", &n);
    getchar();  // Удаляем символ новой строки после ввода n

    printf("Введите текст (максимум %d символов):\n", MAX_LENGTH);
    fgets(input, MAX_LENGTH, stdin);  // Считываем строку

    // Удаляем символ новой строки, если он есть
    input[strcspn(input, "\n")] = 0;

    printWrappedText(input, n);  // Вызываем функцию для печати текста

    return 0;
}
