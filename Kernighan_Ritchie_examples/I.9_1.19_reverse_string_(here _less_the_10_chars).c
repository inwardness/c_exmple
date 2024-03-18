#include <stdio.h>
#define IMAXLINE 40
#define LIMIT 10

void printString(char line[], int lim);
void clearString(char line[], int lim);
int fgetline(char line[], int lim);
void revers(char line[], int lim);

int main()
{
    char line[IMAXLINE];
    int len = 0;
    clearString(line, IMAXLINE);

    while ((len = fgetline(line, IMAXLINE)) > 0)
    {
        if (len > LIMIT)
        {
            // retrievLine(line,IMAXLINE);

            revers(line, IMAXLINE);

            printString(line, IMAXLINE);

            clearString(line, IMAXLINE);

            putchar('\n');
        }
        else
        {
            printf("string less then 10 chars\n");
        }
    }
    return 0;
}

int fgetline(char line[], int lim)
{
    char c;
    int i;
    for (i = 0; i < lim && (c = getchar()) != '\n' && c != EOF; i++)
    {
        line[i] = c;
        if (line[i] == '\n')
        {
            line[i] = c;
            ++i;
        }
    }
    return i;
}

void printString(char line[], int lim)
{
    for (size_t i = 0; i < IMAXLINE; i++)
    {
        printf("%c", line[i]);
    }
}

void clearString(char line[], int lim)
{
    for (size_t i = 0; i < IMAXLINE; i++)

        line[i] = 0;
}

void revers(char line[], int lim)
{
    char exch;

    for (size_t i = 0; i < lim / 2; i++)
    {
        exch = line[i];
        line[i] = line[lim - i - 1];
        line[lim - i - 1] = exch;
    }
}
