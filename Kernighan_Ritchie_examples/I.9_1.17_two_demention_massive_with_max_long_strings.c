#include <stdio.h>
#define STM 5
#define IMAXLINE 20
#define LIMIT 10

int fgetline(char line[], int lim);
void copy(char from[], char to[]);

int main()
{
    int len, i, j;
    int count = 0;
    char line[IMAXLINE];
    char ML[STM][IMAXLINE];

    for (i = 0; i < STM; ++i)
    {
        for (j = 0; j < IMAXLINE; j++)
        {
            ML[i][j] = 0;
        }
    }
    while ((len = fgetline(line, IMAXLINE)) > 0)
    {
        if (len > LIMIT)
        {
            for (i = 0; i < STM; ++i)
            {
                if (i == count)
                    for (j = 0; j < IMAXLINE; ++j)
                    {
                        ML[count][j] = line[j];
                    }
            }
            ++count;
        }
    }
    for (i = 0; i < STM; i++)
    {
        for (j = 0; j < IMAXLINE; j++)
        {
            printf("%c", ML[i][j]);
        }
    }

    return 0;
}

int fgetline(char line[], int lim)
{
    int i;
    char c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    return i;
}
/*
void copy(char from[], char to[])
{
    char i;

    while ((from[i] = to[i]) != '\0')

    i++;
}
*/