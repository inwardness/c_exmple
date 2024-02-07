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
<<<<<<< HEAD
            putchar(c);
        }
        if(c == ' ' && spc >=0)
        {
            
        }
       
        
=======
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
>>>>>>> f46e952e1d1db11a8a5b5fb305885bdc10e4cfb7
    }
}