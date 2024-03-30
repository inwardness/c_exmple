/*Write  a  program  to  remove  trailing  blanks  and  tabs  from  each  line  of  input,
and to delete entirely blank lines.*/

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
        if (c == ' ' || c == '\t' || c == '\n') // find in input space,tab or enter
        {
            if (c == '\t') // exchancge tab -
                c = ' ';   // to space
            ++spcs;        // counting spaces
            if (spcs == 1) // while entered one space - output
            {
                putchar(c);
            }
            else if (spcs > 1) // if counter of spaces become bigger then 1
            {
                putchar(c);
                putchar('\b');
            }

            if (c == '\n') // if eneter input ones - we think it's writing new string
            {
                ++ns;
                if (ns == 1) // while counter of new line less 0
                {
                    putchar(c); // add counter and write char
                }
                else if (ns > 2) // if counter bigger the 1
                {
                   
                    putchar('\b'); // down the counter and delete char = new line
                    putchar('\b');
                }
            }else
            {
                ns = 0;
            }
            
        }
        else
        {
            spcs = 0;
            putchar(c); // if input letter - down counter and wrtite char
        }
    }

    return 0;
}
