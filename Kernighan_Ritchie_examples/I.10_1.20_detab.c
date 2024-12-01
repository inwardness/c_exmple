#include <stdio.h>
#define MAXLINE 1000
#define TAB 8

int max;
char line[MAXLINE];

void clrlin(char line[],int lim);
int get1line(char line[],int lim);
int tab(char line[],int len);

int main()
{   int i;
    int len = 0;
    extern int get1line();
    extern void clrlin();
    printf("Enter a string for detab symbols:\n");
    while ((len = get1line(line,MAXLINE)) > 0)
    {
       printf("%s",line);
       printf("%d\n",len);
       tab(line,len);
    }
    return 0;
}

void clrlin(char line[],int lim)
{
    int i;
    for ( i = 0; i < lim; i++){
        line[i] = 0;
        }    
    line[lim] = 0;
}

 int get1line(char line[],int lim)
{
    int i,c;
    
    for ( i = 0; i < lim - 1 && (c = getchar())!=EOF && c!='\n'; i++)
    
        line[i] = c;
        if (c == '\n')
        {
           line[i] = c;
           ++i;
        }
        line[i] = '\0';
    
  return i;  
}

int tab(char line[],int len)
{
    int i,j = 0;
    int tab = TAB;
    int position = 0;
    int spacechar = 0;
    for ( i = 0; i < len; i++)
    {
        
        if(line[i] == '\t')
        {
            
            spacechar = tab - (position % tab);
            for ( j = 0; j < spacechar; j++)
            {
                position++;
                putchar('.');
            }
        }
        else if (line[i] == '\n')
        {
            position = 0;
            putchar('\n');
        }
        
        else{
        position++;
        printf("%c",line[i]);
        }
    }
    return 0;
}