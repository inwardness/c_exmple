#include <stdio.h>

#define MAXLINE 70

int max; /* max length string*/
char line[MAXLINE];
char longest[MAXLINE];

int get1line(void);
void copy(void);
/*print string max length*/
int main()
{
    int len;
    extern int max;
    extern char longest[];
    max = 0;
    while ((len = get1line()) > 0)
        if (len > max)
        {
            max = len;
            copy();
        }
    if (max > 0)
        /*was there at least one line*/
        printf("%s", longest);
}

/*getline:special version*/
int get1line(void)
{
    int c, i;
    extern char line[];
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/*copy:spec.vers.*/
void copy(void)
{
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}