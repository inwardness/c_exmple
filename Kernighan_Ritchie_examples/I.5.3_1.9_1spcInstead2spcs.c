#include <stdio.h>

int main()
{
    int c;
    int spc = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && spc == 0)
        {
            ++spc;
        }
        else if (c == ' ' && spc > 0)
        {
            putchar('\b');
        }
        else
        {
            spc = 0;
        }
        putchar(c);
    }
}