#include <stdio.h>

#define STM 5
#define IMAXLINE 20
#define LIMIT 10

int fgetline(char line[],int lim);
int retrievLine(char line[], int lim);
void revers(char line[], int lim);

int main()
{
    char line[IMAXLINE];
    int len = 0;
    while ((len = fgetline(line,IMAXLINE)) > 0)
    {
        retrievLine(line,IMAXLINE);
  
        revers(line, IMAXLINE);

    for (size_t i = 0; i < IMAXLINE; i++)
    {
        printf("%c", line[i]);
    }
    putchar('\n');
    }
    return 0;
}


int fgetline(char line[],int lim)
{
    char c;
    int i;
    for (i = 0; i < lim-1 &&(c = getchar())!=EOF && c!='\n'; i++)
    {
        line[i] = c;
    }
    if(c == '\n')
    {
        line[i] = c;
        ++i;
    }
return i;
    
}



int retrievLine(char line[], int lim)
{
    for (size_t i = 0; i < IMAXLINE; i++)
    {
        scanf("%c", &line[i]);
    }
return 0;

}

void revers(char line[], int lim)
{
    char exch;

    for (size_t i = 0;i < lim / 2; i++)
    {
        exch = line[i];
        line[i] = line[lim - i-1];
        line[lim - i-1] = exch;
    }
}
