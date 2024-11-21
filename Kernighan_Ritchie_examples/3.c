#define MAX_ROWS 10
#define MAX_COLS 50
#include <stdio.h>

int gtstring(char line[], int lim);
void cstring(char line[], int lim);

int main()
{
    char line[MAX_COLS];
    char massivelines[MAX_ROWS][MAX_COLS];

    int len = 0;
    int i, j;
    int count = 0;

    // Reset to zero two-dimensional array
    for (i = 0; i < MAX_ROWS; i++)
    {
        for (j = 0; j < MAX_COLS; j++)
        {
            massivelines[i][j] = 0;
        }
    }

    printf("Print string with tabs, spaces, or empty string:\n");
    while ((len = gtstring(line, MAX_COLS)) > 0)
    {
        if (len > 1)
        {
            ++count;
            for (j = 0; j < len; j++)
            {
                massivelines[count - 1][j] = line[j];
            }
            massivelines[count - 1][len] = '\0'; // Null-terminate the string
        }
        else if (len == 1)
        {
            cstring(line, MAX_COLS);
        }
    }

    for (i = 0; i < count; i++)
    {
        printf("%s\n", massivelines[i]);
    }

    return 0;
}

int gtstring(char line[], int lim)
{
    int i, c;
    int space_flag = 0; // Flag to track consecutive spaces

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n';)
    {
        if (c == '\t' || c == ' ')
        {
            if (!space_flag)
            {
                line[i++] = ' '; // Replace tab or space with a single space
                space_flag = 1;
            }
        }
        else
        {
            line[i++] = c;
            space_flag = 0;
        }
    }

    if (c == '\n')
    {
        line[i] = '\0'; // Null-terminate the string
    }
    else
    {
        line[i] = '\0'; // Null-terminate the string
        while ((c = getchar()) != EOF && c != '\n'); // Clear the input buffer
    }

    return i;
}

void cstring(char line[], int lim)
{
    int i;
    for (i = 0; i < lim; i++)
    {
        line[i] = 0;
    }
    line[lim - 1] = '\0'; // Null-terminate the string
}
