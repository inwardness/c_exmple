#include <stdio.h>
#define MAXLINE 1000

int max;
char line[MAXLINE];
char exchtab[MAXLINE];
char exchline[MAXLINE];

void clrlin(char line[],int lim);
int get1line(char line[],int lim);
/* void copy(char line[],char exchline[]);
int exch(char exchtab[],char exchline[]); */

char tab = '_';

int main()
{
    int len;
    extern int get1line();
    extern void clrlin(char line[],int lim);
    while ((len = get1line(line,MAXLINE)) > 0){
       
       printf("%s\n",line);
       printf("%d\n",len);
       clrlin(line,MAXLINE);
    }
    return 0;
}

void clrlin(char line[],int lim)
{
    int i;
    for ( i = 0; i < lim-1; i++){
        line[i] = 0;
        }    
    
}

 int get1line(char line[],int lim)
{
    int count;
    int i,c;
    for ( i = 0; i < lim-1 && ( c = getchar())!=EOF && c!='\n'; i++){
    
    if (c == '\t' && count > 0){   
        count = 5;
        while (count >=0){
        line[i] = tab;
        i++;
        count--;
        }
     }
    count = 5;
    if (c == '\n')
    {
      line[i] = c;
      ++i;    
      line[i] = '\0';
    }
    else 
    line[i] = c;
    }
  return i;  
}
/*
void copy(char line[],char exchline[]){
   
    int i=0;
    while ((exchline[i]=line[i])!='\0')
    ++i;
    
}

int exch(char exchtab[], char exchline[])
{
    int i,count = 4;
    while ((exchtab[i]=exchline[i])!='\0')
    ++i;
    if (exchline[i] == '\t')
    {   
        while (count > 1)
        {
            exchtab[i] = tab;
            ++i;
            --count;
        }
        count = 4;
        
    }
    
} */