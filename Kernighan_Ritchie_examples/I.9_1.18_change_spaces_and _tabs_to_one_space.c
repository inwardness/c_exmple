/*Write  a  program  to  remove  trailing  blanks  and  tabs  from  each  line  of  input,
and to delete entirely blank lines.*/

#include <stdio.h>
#include <stdlib.h>
#define COLUMNS 5
#define SYMINLINE 40


int f2getline(char line[], int lim);                        // function to get length cerrent length
void copy(char from[], char to[]);                          // function of copy string do two demension arrays

void fclearString(char line[],int lim);
void fprint(char StringMassive[COLUMNS][SYMINLINE]);
void writeLine(char StringMassive[COLUMNS][SYMINLINE],char line[SYMINLINE], int count);
void fprints(char line[],int lim);
int main()
{

    char len = 0;
    int count = 0;
    char line[SYMINLINE];

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
        }
    }
}

void fclearString(char line[], int lim){
    for (size_t i = 0; i < lim  ; i++){
        line[i] = 0;
    }
}

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


