/* Написать программу, печатающую символы так, чтобы строки текста не выходили правее n-й позиции. Это означает, что каждая строка, длина которой превышает n, должна печататься с переносом на следующие строки. Место переноса следует «искать» после последнего символа, отличного от символа-разделителя, расположенного левее n-ой позиции. Позаботиться о том, чтобы программа вела себя разумно в случае очень длинных строк, а так же когда до n-ой позиции не встречается ни одного символа пробела или табуляции.
Сделать стандартными средствами С с использованием только библиотеки stdio.h
 */

#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

<<<<<<< HEAD
void print_wrapped_text(const char *text, int n)
{
    int length = strlen(text);
    int current_position = 0;
    int last_space_position = -1;
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        current_position++;
        if ((current_position < n) && (text[i] != ' ' || text[i] != '\t'))
        {
            printf("%c", text[i]);
        }
        else
        {
            if (current_position < n && (text[i] == ' ' || text[i] == '\t'))
            {
                last_space_position = i;
                printf("%c", text[i]);
            }
            else if (current_position > n && (text[i] != ' ' || text[i] != '\t'))
            {
                count = current_position - last_space_position;
                do {
                    putchar('\b');
                    i--;
                    current_position--;
                    }
                 while (count > 0);
                printf("\n");
            }
            else if (current_position > n && (text[i] == ' ' || text[i] == '\t'))
            {
                printf("\n");
=======
void print_wrapped_text(const char *text, int n) {
    int length = strlen(text);
    int current_position = 0;
    int last_space_position = -1;

    for (int i = 0; i < length; i++) {
        // Если текущий символ - пробел или табуляция, запоминаем его позицию
        if (text[i] == ' ' || text[i] == '\t') {
            last_space_position = i;
        }

        // Печатаем символ
        putchar(text[i]);
        current_position++;

        // Если достигли n-й позиции
        if (current_position >= n) {
            // Если есть пробел для переноса, переносим строку
            if (last_space_position != -1) {
                putchar('\n');
                current_position = i - last_space_position; // Обновляем текущую позицию
                last_space_position = -1; // Сбрасываем позицию пробела
            } else {
                // Если пробела нет, переносим строку на n-й позиции
                putchar('\n');
                current_position = 0; // Сбрасываем текущую позицию
                last_space_position = -1; // Сбрасываем позицию пробела
                i--; // Повторяем текущий символ
>>>>>>> 37e817b59ae8d7c50b51859da7a0c5046a73fb7f
            }
        }
    }
}

<<<<<<< HEAD
int main()
{
=======
int main() {
>>>>>>> 37e817b59ae8d7c50b51859da7a0c5046a73fb7f
    char text[MAX_LINE_LENGTH];
    int n;

    // Запрашиваем у пользователя длину строки
    printf("Введите максимальную длину строки (n): ");
    scanf("%d", &n);
    getchar(); // Чистим буфер после scanf

    // Запрашиваем текст
    printf("Введите текст (максимум %d символов):\n", MAX_LINE_LENGTH - 1);
    fgets(text, MAX_LINE_LENGTH, stdin);

    // Печатаем текст с переносами
    print_wrapped_text(text, n);

    return 0;
}
