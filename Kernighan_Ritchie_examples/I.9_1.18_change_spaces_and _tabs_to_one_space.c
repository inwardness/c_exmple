/*Write  a  program  to  remove  trailing  blanks  and  tabs  from  each  line  of  input,
and to delete entirely blank lines.*/

#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD

#define MAX 70

int countchar(char string[], int lim);

=======
#include <stdbool.h>
#include<string.h>
#define COLUMNS 5
#define SYMINLINE 40


<<<<<<< HEAD
int f2getline(char line[], int lim);                        // function to get length cerrent length
void copy(char from[], char to[]);                          // function of copy string do two demension arrays

void fclearString(char line[],int lim);
void fprint(char StringMassive[COLUMNS][SYMINLINE]);
void writeLine(char StringMassive[COLUMNS][SYMINLINE],char line[SYMINLINE], int count);
void fprints(char line[],int lim);
=======
void trailing_blanks(char line[],int lim);
int f2getline(char line[], int lim);      // function to get length cerrent length
int f1getline(char line[], int lim);
void fclearString(char line[], int lim);
int fprints(char line[], int lim);
int fgetline(char line[], int lim);
>>>>>>> ffffabe7dc8c6f8e9f18cafc199f0e5855f812b5
>>>>>>> linux
int main()
{
    char string[MAX];
    int len = 0;

<<<<<<< HEAD
    while ((len = (countchar(string, MAX))) > 0)
    {
        
            printf("%s", string);
        
            printf("%d",len);
        
        
    }
    return 0;
}

int countchar(char string[], int lim)
{
    int i,c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c!='\n'; i++)
    {
        string[i] = c;
        if (c == '\n')
        {
            string[i] = c;
            i++;
            string[i] = '\0';
        }

       
       
=======
    char len = 0;
    int count = 0;
    char line[SYMINLINE];
<<<<<<< HEAD

    fclearString(line,SYMINLINE);

    printf("enter string:\n");

    while ((len = f2getline(line, SYMINLINE)) > 0){
           printf("%d\n",len);
           putchar('\b');
            }        
    
    
    return 0;
}

int f2getline(char line[], int lim)
{
    int i;
    char c = getchar();
    

    for (i = 0; i < lim - 1 ; ++i)
    {
        line[i] = c;
        if (c == '\n')
        {
            line[i] = c;
            i++;
            line[i+1] ='\0';
        }
        
>>>>>>> linux
    }
     return i;
}

void writeLine(char StringMassive[COLUMNS][SYMINLINE], char line[SYMINLINE], int count){
    for (size_t i = 0; i < COLUMNS - 1; i++){
        if (i == count){
            for (size_t j = 0; j < SYMINLINE - 1; j++){
                StringMassive[count][j] = line[j];
            }
        }
    }
}

void fclearStrings(char StringMassive[COLUMNS][SYMINLINE]){
    for (size_t i = 0; i < COLUMNS - 1; ++i){
        for (size_t j = 0; j < SYMINLINE - 1; j++){
            StringMassive[i][j] = 0;
=======
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
<<<<<<< HEAD
*/
=======

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
>>>>>>> ffffabe7dc8c6f8e9f18cafc199f0e5855f812b5
        }
    line[i] = '\0';
    return i;

}

<<<<<<< HEAD
void fclearString(char line[], int lim){
    for (size_t i = 0; i < lim  ; i++){
=======
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
>>>>>>> ffffabe7dc8c6f8e9f18cafc199f0e5855f812b5
        line[i] = 0;
    }
}

<<<<<<< HEAD
void fprints(char line[],int lim){
    for (size_t i = 0; i < lim; i++){
        printf("%c",line[i]);
    }
}

void fprint(char StringMassive[COLUMNS][SYMINLINE]){
    for (size_t i = 0; i < COLUMNS-1; i++){
        printf("\n");
        for (size_t j = 0; j < SYMINLINE-1; j++){
            printf("%c", StringMassive[i][j]);
        }
    }
}


=======
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
>>>>>>> ffffabe7dc8c6f8e9f18cafc199f0e5855f812b5
>>>>>>> linux
