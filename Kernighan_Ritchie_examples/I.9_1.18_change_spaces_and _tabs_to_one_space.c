#include <stdio.h>

int main()
{
    char c;
    int spcs = 0;
    int nL = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            if (c == '\t')
                c = ' ';
            ++spcs;

            if (spcs == 1)
            {
                putchar(c);
            }
            else if (spcs > 1)
            {
                putchar(c);

                putchar('\b');
            }
            if (c = '\n')
            {
                ++nL;
                if (nL == 1)
                {
                    putchar(c);
                }
                else if (nL > 1)
                {
                    nL = 0;
                    
                    putchar('\b');
                }
                
                
            }
            
        }
        else
        {
            spcs = 0;
            putchar(c);
        }
    }

    return 0;
}
