#include <stdio.h>
#define MAXLINE 1000
#define TAB 8

int max;
char line[MAXLINE];

int chspcs(char line[], int len);
void clrlin(char line[], int lim);
int get1line(char line[], int lim);

int main()
{
    int len;
    extern int get1line();
    extern void clrlin(char line[], int lim);
    printf("Enter a string for detab string:\n");
    while ((len = get1line(line, MAXLINE)) > 0)
    {

        printf("%s", line);
        printf("%d\n", len);
        chspcs(line, len);
        clrlin(line, MAXLINE);
    }
    return 0;
}

void clrlin(char line[], int lim)
{
    int i;
    for (i = 0; i < lim - 1; i++)
    {
        line[i] = 0;
    }
}

int get1line(char line[], int lim)
{

    int i, c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

int chspcs(char line[], int len)
{
    int i, j;
   // int charvalue = 0;
    int spacecount = 0;
   // int postabs = 0;
   // int posspace = 0;
    int position = 0;
    int tab = TAB;
    for (i = 0; i < len; i++)
    {

        if (line[i] == ' ')
        {
            position++;
            spacecount++;
            if (position % tab == 0 && spacecount == tab)
            {
                putchar('\t');
                
            }
            
        }
        else if (line[i] == '\n')
        {
            putchar('\n');
        }
        else
        {   
            
            if ((position % tab != 0 )&&( spacecount < tab))
            {
                for ( j = 0; j < spacecount; j++)
                {
                    putchar('_');
                    
                }
                
            }
           
            position++;
            printf("%c", line[i]);
            
        }
       
    }

    return 0;
}
