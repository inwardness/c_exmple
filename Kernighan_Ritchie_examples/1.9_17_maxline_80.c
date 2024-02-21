#include <stdio.h>
#define MAXLINE 1000
#define LIMIT 10
int fgetline(char line[], int lim);

void copy(char from[], char to[]);
int main()
{
    int len, i, j;
    char line[IMAXLINE];
    char ML[4][IMAXLINE];
    for (j = 0; j < 4; ++j)
        ML[j] == 0;
    while ((len = fgetline(line, IMAXLINE)) > 0)
    {
        if (len > 5)
        {
            for (j = 0; j < 4; ++j)
            {
                for (i = 0; i < IMAXLINE - 1; ++i)
                    if (fgetline(ML[j], IMAXLINE) != 0)
                        copy(ML[j], line);
                ++j;
            }
        }
    }
    printf("%s", ML);

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
     line[i] = '\0';
    return i;
}

void copy(char from[], char to[])
{
    char i;

    while ((from[i] = to[i]) != '\0')
}