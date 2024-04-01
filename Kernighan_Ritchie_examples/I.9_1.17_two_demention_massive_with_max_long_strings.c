/* Write a program to print all input lines that are longer than 80 characters.*/

#include <stdio.h>
#define COLUMNS 5       // columns in two demensional array
#define SYMINLINE 40     // symbol in  string
#define LIMITSTRINGS 10 // minimum of definition length string to write

int f1getline(char line[], int lim);                         // function to get length cerrent length
void copy(char from[], char to[]);                          // function of copy string do two demension arrays
void fclearStrings(char StringsMassive[COLUMNS][SYMINLINE]); // function in start of program for clear two demensional array
void fprint(char StringsMassive[COLUMNS][SYMINLINE]);        // function for print two demenstional array

int main()
{
    int len, i, j;                          // length of input string and elements of array
    int count = 0;                          // counter  not writen string
    char line[SYMINLINE];                    // input string 
    char StringsMassive[COLUMNS][SYMINLINE]; // two demnesional array for founded strings

    fclearStrings(StringsMassive);
    printf("Enter a five string:\n");

    while ((len = f1getline(line, SYMINLINE)) > 0) // cycle work while string not equal 0
    {

        if (len > LIMITSTRINGS) // value of symbol in string meets the condition
        {

            for (i = 0; i < COLUMNS; ++i)
            {
                if (i == count)
                    for (j = 0; j < SYMINLINE; ++j)
                    {
                       StringsMassive[count][j] = line[j];
                    }
            }
            ++count;
        }
    }
    for (i = 0; i < COLUMNS; i++)
    {
        for (j = 0; j < SYMINLINE; j++)
        {
            printf("%c", StringsMassive[i][j]);
        }
    }

    putchar('\n');
    printf("Strings with more then 10 symbols:\n");
    fprint(StringsMassive);
    putchar('\n');
    return 0;
}

int f1getline(char line[], int lim)
{
    int i;
    char c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    return i;
}

void fclearStrings(char StringsMassive[COLUMNS][SYMINLINE])
{
    for (__int32_t i = 0; i < COLUMNS - 1; ++i)
    {
        for (__int32_t j = 0; j < SYMINLINE - 1; j++)
        {
            StringsMassive[i][j] = 0;
        }
    }
}

void fprint(char StringsMassive[COLUMNS][SYMINLINE])
{
    for (__int32_t i = 0; i < COLUMNS - 1; i++)
    {
        for (__int32_t j = 0; j < SYMINLINE - 1; j++)
        {
            printf("%c", StringsMassive[i][j]);
        }
    }
}

void copy(char from[], char to[])
{
    int i = 0;

    while ((from[i] = to[i]) != '\0')

        i++;
}
