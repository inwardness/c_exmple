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
            putchar(c);
        }
        if(c == ' ' && spc >=0)
        {
            
        }
       
        
    }
}