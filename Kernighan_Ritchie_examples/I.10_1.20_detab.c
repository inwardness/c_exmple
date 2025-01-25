#include <stdio.h>
#define MAXLINE 1000
#define TAB 8

int max;
char line[MAXLINE];

int tabs(char line[],int len);
void clrlin(char line[],int lim);
int get1line(char line[],int lim);




int main()
{
    int len;
    extern int get1line();
    extern void clrlin(char line[],int lim);
    printf("Enter a string for detab string:\n");
    while ((len = get1line(line,MAXLINE)) > 0){
       
       printf("%s",line);
       printf("%d\n",len);
       tabs(line,len);
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
   
    int i,c;
    for ( i = 0; i < lim-1 && ( c = getchar())!=EOF && c!='\n'; i++)
        line[i] =c;
        if (c == '\n')
        { line[i] = c;
            ++i;    
        }
        line[i] = '\0';
    
    return i; 
}

 int tabs(char line[],int len)
{
    int i,j;
    int position = 0;
    int spacevalues = 0;
    int tab = TAB;
    for ( i = 0; i < len; i++)
    {
       
        if (line[i] == '\t')
        {
            spacevalues = tab -(position%tab);
            for ( j = 0; j < spacevalues; j++)
            {
                putchar('_');
            }
            position = position + spacevalues;
           
              
        }
        else if (line[i] == '\n')
        {
            putchar('\n');
            position = 0;
            return 0;
        }
        
        else 
        {
            
            printf("%c",line[i]);
            position++;
        }
               
    }
    return 0;
}
