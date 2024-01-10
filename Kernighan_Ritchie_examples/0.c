

#include <conio.h>
#include <stdio.h>

int main()
{
    int k;
    char c;
    while ((k = getch()) != EOF)
    {
        if (k == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (k == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (k == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
            putchar(k);
    };
    return 0;
}