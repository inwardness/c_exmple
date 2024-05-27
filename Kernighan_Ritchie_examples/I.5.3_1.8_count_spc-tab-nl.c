/*counting new lines, tabs and new strings*/

#include <stdio.h>

int main()
{
    int nl=0;
    int tab=0;
    int spc=0;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
        if (c == '\t')
        {
            ++tab;
        }
        if (c == ' ')
        {
            ++spc;
        }
    }
    printf("new_line:%d\nspaces:%d\ntabs:%d\n", nl, tab, spc);
}
