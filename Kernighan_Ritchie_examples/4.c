#include <stdio.h>

#define TAB_STOP 4  // Именованная константа для расстояния между стопами табуляции

void detab(int tabstop) {
    int c; // текущий символ
    int position = 0; // текущая позиция в строке

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            // Если встречаем символ табуляции, добавляем пробелы до следующей стопы
            int spaces_to_add = tabstop - (position % tabstop);
            for (int i = 0; i < spaces_to_add; i++) {
                putchar('_'); // выводим пробел
            }
            position += spaces_to_add; // обновляем текущую позицию
        } else {
            putchar(c); // выводим текущий символ
            position++; // увеличиваем позицию
            if (c == '\n') {
                position = 0; // сбрасываем позицию при новой строке
            }
        }
    }
}

int main() {
    detab(TAB_STOP); // вызываем функцию с именованной константой
    return 0;
}