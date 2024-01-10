#include <stdio.h>

int main()
{
    int c;
    int spc = 0;
    while ((c = getchar()) != EOF)
    {
        if(c == ' ' && spc == 0)
        {
            ++spc;
            
        }
        if(c == ' ' && spc > 0)
        {
                c = getchar();
        }
        putchar(c);
        
    }
}