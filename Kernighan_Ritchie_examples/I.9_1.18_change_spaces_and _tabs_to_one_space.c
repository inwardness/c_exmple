#define MAX_ROWS 10
#define MAX_COLS 50
#include <stdio.h>

// int gtstring(char line[],int lim);
void cstring(char line[], int lim);
void rmtrailingblanks(char line[]);
int gtstring(char line[],int lim);

int main()
{
    
    char line[MAX_COLS];
    char massivelines[MAX_ROWS][MAX_COLS];

    int len = 0;
    int c, i, j = 0;
    int count = 0;

    // reset to zero two-measure massive
    for (i = 0; i < MAX_ROWS; i++)
    {
        for (j = 0; j < MAX_COLS; j++)
        {
            massivelines[i][j] = 0;
        }
    }
    printf("print string with tabs spaces or empty string:\n");
    while ((len = (gtstring(line, MAX_COLS)) > 0))
    {
        if (len > 1)
        {
            ++count;
            for (i = 0; i < MAX_ROWS-1; i++)
            {   
                if (i == count)
                {              
                    for (j = 0; j < MAX_COLS - 1; i++)
                    massivelines[count][j] = line[i];
                }
            }
        }
        else if(len == 1)
        cstring(line,MAX_COLS);
    }
for ( i = 0; i < MAX_ROWS-1; i++)
{
    for ( j = 0; j < MAX_COLS-1; j++)
    {
        printf("%c",massivelines[i][j]);
    }
    printf("\n");
}


return 0;
}

int gtstring(char line[],int lim)
{
    int i, c;
    char t = '\t';
    char s = ' ';
    int count = 0;

    for (i = 0; i < MAX_COLS - 1 && ((c = getchar()) != EOF) && (c != '\n'); i++)
    {
        if (c == t || c == s)
        {
            c = s;
            ++count;
            if (count == 1)
            {
                line[i] = c;
            }
            else if (count > 1)
            {
                c = '\b';
                line[i] = c;
            }
        }
        else if (c == '\n')
        {
            line[i] = c;
            ++i;
            line[i] = EOF;
        }
        else
            count = 0;
            line[i] = c;
    }
    return i;
}

void cstring(char line[], int lim)
{
    int i;
    for (i = 0; i < lim ; i++)
    {
        line[i] = 0;
    }
    line[lim] = EOF;
}
