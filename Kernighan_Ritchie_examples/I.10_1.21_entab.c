//program print empty positioin instead tab and underscore symbol
// instead space in text with saving text formatting
#include <stdio.h>
#define MAXLINE 1000
#define TAB 8

int max;
char line[MAXLINE];

void clrlin(char line[], int lim);
int g1line(char line[], int lim);
int tab(char line[], int len);

int main()
{
    int i;
    int len = 0;
<<<<<<< HEAD
    extern int g1line();
    extern void clrlin();
=======
    extern int get1line(char line[], int lim);
    extern void clrlin(char line[], int lim);
>>>>>>> 3b72dcb7c65d65d06b3775c1191b9c54b33c9903
    printf("Enter a string for detab symbols:\n");
    while ((len = g1line(line, MAXLINE)) > 0)
    {
        printf("%s", line);
        printf("%d\n", len);
        tab(line, len);
    }
    return 0;
}

void clrlin(char line[], int lim)
{
    int i;
    for (i = 0; i < lim; i++)
    {
        line[i] = 0;
    }
    line[lim] = '\0';
}

int g1line(char line[], int lim)
{
    int i;
    char c;

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

int tab(char line[], int len)
{
    int i, j = 0;
    int tab = TAB;
    int charposition = 0;
    int tabc = 0;
    int spacec = 0;
    for (i = 0; i < len; i++)
    {

        if (line[i] == ' ')
        {
            charposition++;
            spacec++;
            if (charposition % tab == 0 && spacec % tab == 0)
            {
                putchar('\t');
                spacec = 0;
            }
            
        }
        else if (line[i] == '\n')
        {
            charposition = 0;
            putchar('\n');
        }

        else
        {
            if (spacec > 0)
            {
                while (spacec > 0)
                {
                    putchar('_');
                    spacec--;
                }
                
            }
            
            charposition++;
            printf("%c", line[i]);
        }
    }
    return 0;
}