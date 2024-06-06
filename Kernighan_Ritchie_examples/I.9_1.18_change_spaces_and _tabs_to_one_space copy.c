#include <stdio.h>

#define STM 5
#define IMAXLINE 100
#define LIMIT 10

int f1getline(char line[], int lim);
void revers(char line[], int lim);

int main()
{
    char c;
    char line[SYMINLINE];
    int len = 0;
     while ((len = (fgetline(line,IMAXLINE))) > 0)
     {
        putchar('\n');
         revers(line,IMAXLINE);
         

         printf("%s",line);
      
   
    for (size_t i = 0; i  < IMAXLINE - 1; i++)
{
    line[i] = 0;
}
/*
revers(line,IMAXLINE);
    for (size_t i = 0; i < IMAXLINE; i++)
    {
        printf("%c",line[i]);
    } */
    
     }
return 0;
}

int f1getline(char line[], int lim)
{
    char c;
    int i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        line[i] = c;
        if (c == '\n')
        {
            line[i] = c;
            i++;
            
        }
        
    }
    return i;
}

void revers(char line[], int lim)
{
    char c;
    char exch;

    for (size_t i = 0; i < lim/ 2; i++)
    {
        exch = line[i];
        line[i] = line[lim - i];
        line[lim - i] = exch;
    }
    
}
