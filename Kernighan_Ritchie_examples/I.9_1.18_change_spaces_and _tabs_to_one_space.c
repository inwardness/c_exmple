/*Write  a  program  to  remove  trailing  blanks  and  tabs  from  each  line  of  input,
and to delete entirely blank lines.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#define COLUMNS 5
#define SYMINLINE 40
#define LIMITSTRINGS 10

void trailing_blanks(char line[],int lim);
int f2getline(char line[], int lim);      // function to get length cerrent length
int f1getline(char line[], int lim);
void fclearString(char line[], int lim);
int fprints(char line[], int lim);
int fgetline(char line[], int lim);
int main()
{

    char len = 0;
    int count = 0;
    char line[SYMINLINE];
    char exchline[SYMINLINE];
    char StringMassive[COLUMNS][SYMINLINE];

    fclearString(line, SYMINLINE);
    fclearString(exchline, SYMINLINE);
    printf("enter string:\n");

    while ((len = fgetline(line, SYMINLINE)) > 0)
    {
       printf("characters in strings with blanks:%d\n",len);
       trailing_blanks(line,len);
       count = f1getline(line,SYMINLINE);
       fprints(line,SYMINLINE);
       printf("%d\n",count);
       fclearString(line,SYMINLINE);
    }
    return 0;
}

void trailing_blanks(char line[],int lim)
{
    int i;

    for(i =  lim;i >=0 && line[i]!=' ';--i)
    
    line[i+1] = '\n';
    line[i+2] = '\0';
    
}

int fgetline(char line[], int lim)
{
    char c;
    int i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
        
    if (c == '\n')
        {
         line[i] = c;
         ++i;
        }
    line[i] = '\0';
    return i;

}

int f1getline(char line[], int lim)
{
    
    int i,a;
    a = 0;

    for (i = 0; i < lim - 1 && line[i] != EOF; ++i)
    if (line[i]!= 0 && line[i]!='\0')
    {
        ++a;
    }
    
    
    return a;

}



void fclearString(char line[], int lim)
{
    for (size_t i = 0; i < lim; i++)
    {
        line[i] = 0;
    }
}

int f2getline(char line[], int lim)
{
    int  i;
    int spaces = 0;
    char c;

    
    for ( i = 0; i < lim - 1 && (c = getchar())!=EOF && c !='\n' ; i++)
    {
        line[i] = c;

        if (c == ' ' || c == '\t')
        {
            spaces++;
            if (c == '\t')
            {
                c = ' ';
            }
            
            if (spaces == 1)
            {
                line[i] = c;
            }
            else if (spaces > 1)
            {
                i--;
            }

        } 
       /*  if(c == '\n' && i == 0)
        {
            c = '\r';
        }
        else if(c == '\n' && c > 1)
        {
            c = '\n';
            i++;
            line[i] = '\0';
        } */
        else
            spaces = 0;
    }    
       
return i;
}

int fprints(char line[],int lim)
{
    int i;
    for (size_t i = 0; i < lim -1 && line[i]!='\0'; i++)
    {
        printf("%c",line[i]);
    }

return i;
}
