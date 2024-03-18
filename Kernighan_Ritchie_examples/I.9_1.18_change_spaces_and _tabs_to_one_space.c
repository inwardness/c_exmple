#include <stdio.h>

int main()
{
    char c;
    int spcs = 0;
    int ns = 0;

    printf("Print a string with double- quard- spaces or tabs or with empty lines:\n");
    printf("for exit press - Ctrl+D\n");
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
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

            else if (c == '\n')
            {
                if (ns == 0)
                {
                    ++ns;
                    putchar(c);
                }
                else if (ns > 1)
                {
                    ns = 0;
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
