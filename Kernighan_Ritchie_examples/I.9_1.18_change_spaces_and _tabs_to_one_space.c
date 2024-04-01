/*Write  a  program  to  remove  trailing  blanks  and  tabs  from  each  line  of  input,
and to delete entirely blank lines.*/

#include <stdio.h>
#include <stdlib.h>
#define COLUMNS 5
#define SYMINLINE 40
#define LIMITSTRINGS 10

int f2getline(char line[], int lim);                        // function to get length cerrent length
void copy(char from[], char to[]);                          // function of copy string do two demension arrays
void fclearStrings(char StringMassive[COLUMNS][SYMINLINE]); // function in start of program for clear two demensional array
void fclearString(char line[],int lim);
void fprint(char StringMassive[COLUMNS][SYMINLINE]);
void writeLine(char StringMassive[COLUMNS][SYMINLINE],char line[SYMINLINE], int count);
void fprints(char line[],int lim);
int main()
{

    char len = 0;
    int count = 0;

    char line[SYMINLINE];
    char StringMassive[COLUMNS][SYMINLINE];
    
    fclearStrings(StringMassive);
    fclearString(line,SYMINLINE);
    printf("enter string:\n");

    while ((len = f2getline(line, SYMINLINE)) > 1)
    {
        
      //fprints(line,SYMINLINE);
      writeLine(StringMassive,line,count);
      ++count;
      putchar('\n');
      fprint(StringMassive);
      putchar('\n'); 
    }

    return 0;
}

void writeLine(char StringMassive[COLUMNS][SYMINLINE], char line[SYMINLINE], int count)
{
    for (size_t i = 0; i < COLUMNS - 1; i++)
    {
        if (i == count)
        {
            for (size_t j = 0; j < SYMINLINE - 1; j++)
            {
                StringMassive[count][j] = line[j];
            }
        }
    }
}

void fclearStrings(char StringMassive[COLUMNS][SYMINLINE])
{
    for (__int32_t i = 0; i < COLUMNS - 1; ++i)
    {
        for (__int32_t j = 0; j < SYMINLINE - 1; j++)
        {
            StringMassive[i][j] = 0;
        }
    }
}

void fclearString(char line[], int lim)
{
    for (size_t i = 0; i < lim ; i++)
    {
        line[i] = 0;
    }
}

void fprints(char line[],int lim)
{
    for (size_t i = 0; i < lim; i++)
    {
        printf("%c",line[i]);
    }
    
}
void fprint(char StringMassive[COLUMNS][SYMINLINE])
{
    for (__int32_t i = 0; i < COLUMNS-1; i++)
    {
        printf("\n");
        for (__int32_t j = 0; j < SYMINLINE-1; j++)
        {
            printf("%c", StringMassive[i][j]);
            
        }
        
    }
}

int f2getline(char line[], int lim)
{
    int i;
    char c;
    int spaceS = 0;
    int emptyS = 0;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {

        if (c == ' ' || c == '\t')
        {
            ++spaceS;
            ++emptyS;
            if (c == '\t')
            {
                c = ' ';
            }
            if (c == ' ')
            {
                if (spaceS == 1)
                {
                    putchar(c);
                    line[i] = c;
                }
                else if (spaceS > 1)
                {
                    putchar('\b');
                    --spaceS;
                }
            }
        }
        else if (c == '\n')
        {
            line[i] = c;
            ++i;
        }

        else
        {

            line[i] = c;
            spaceS = 0;
        }
    }
    return i;
}
