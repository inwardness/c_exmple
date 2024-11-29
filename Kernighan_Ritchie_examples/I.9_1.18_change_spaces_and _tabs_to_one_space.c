#define MAX_ROWS 4
#define MAX_COLS 50

#include <stdio.h>

// int gtstring(char line[],int lim);
void cstring(char line[], int lim);

int gtstring(char line[],int lim);

int main()
{
    
    char line[MAX_COLS];
    char massivelines[MAX_ROWS][MAX_COLS];

    int len = 0;
    int c, i, j = 0;
    int count = -1;

    // reset to zero two-measure massive
    for (i = 0; i < MAX_ROWS; i++)
    {
        for (j = 0; j < MAX_COLS; j++)
        {
            massivelines[i][j] = 0;
        }
    }
    printf("print string with tabs spaces or empty string:\n");
    while ((len = gtstring(line, MAX_COLS)) > 0)
    {
        if (len > 1)
        {
            ++count;
            for (i = 0; i < MAX_ROWS-1; i++)
            {   
                if (i == count)
                {                                           
                    for (j = 0; j < len; j++)
                    massivelines[count][j] = line[j];
                    
                }
            }
        }
        else (len == '\n');
        {
            continue;
        }  
    }
for ( i = 0; i < MAX_ROWS; i++)
{
    for ( j = 0; j < MAX_COLS; j++)
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

    for (i = 0; i < lim && ((c = getchar()) != EOF) && (c != '\n'); i++)
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
                --i;
            }
        }              
       
        else if (c == '\n')
        {
            line[i] = c;
            line[++i] = EOF;
            ++i;
            
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
