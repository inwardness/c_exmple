//program print undersores symbols in tabs spaces between symbols
//not equal spaces or tabs.
#include <stdio.h>
#define MAXLINE 1000
#define TAB 8

int max;
char line[MAXLINE];

<<<<<<< HEAD
void clearline(char line[], int max);

int gtline(char line[],int max);

=======
void clrlin(char line[],int lim);
int f1getline(char line[],int lim);
>>>>>>> 3b72dcb7c65d65d06b3775c1191b9c54b33c9903
int tab(char line[],int len);

int main()
{   
    int i;
    int len = 0;
<<<<<<< HEAD
    extern int    gtline(char line[], int max);
    extern void clearline(char line[], int max);
    printf("Enter a string for detab symbols:\n");
    while ((len = gtline(line,MAXLINE)) > 0)
           {
            printf("%s",line);
            printf("%d\n",len);
            tab(line,len);
           }
        return 0;
=======
    extern int f1getline(char line[], int lim);
    extern void clrlin(char line[],int lim);
    printf("Enter a string for detab symbols:\n");
    while ((len = f1getline(line,MAXLINE)) > 0)
    {
       //printf("%s",line);
       printf("%d\n",len);
       tab(line,len);
    }
    return 0;
>>>>>>> 3b72dcb7c65d65d06b3775c1191b9c54b33c9903
}

void clearline(char line[],int max)
{
    int i;
    for ( i = 0; i < max; i++){
        line[i] = 0;
        }    
    line[max] = 0;
}

<<<<<<< HEAD
int gtline(char line[],int max)
=======
 int f1getline(char line[],int lim)
>>>>>>> 3b72dcb7c65d65d06b3775c1191b9c54b33c9903
{
    int i,c;
    
    for ( i = 0; i < max - 1 && (c = getchar())!=EOF && c!='\n'; i++)
    
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
                putchar('_');
            }
        
        }
        else if (line[i] == '\n')
        {
            ++i;
            position = 0;
            putchar('\n');
        }
        
        else
        {
        printf("%c",line[i]);
        position++;
        }
    }
    return 0;
}