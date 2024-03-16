#include <stdio.h>
/*
#define STM 5
#define IMAXLINE 20
#define LIMIT 10

int fgetline(char line[], int lim);
void copy(char from[], char to[]);
*/
int main()
{
    char c;
    int spaceC = 0;
    // int newL = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            ++spaceC;
            if (c == '\t'){
            
                putchar(' ');
            }
                if (spaceC == 1)
                {
                    putchar(c);
                }
                else if (spaceC > 1)
                {
                    putchar(c);
                    putchar('\b');
                }
            
        }
        else
        {
            spaceC = 0;
            putchar(c);
        }
    }

    return 0;
}
/*
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

void copy(char from[], char to[])
{
    char i;

    while ((from[i] = to[i]) != '\0')

    i++;
}
*/