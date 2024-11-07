#define MAX_ROWS 10
#define MAX_COLS 50

#include <stdio.h>

int main()
{
    
    char line[MAX_COLS];
    char massivelines[MAX_ROWS][MAX_COLS];
    int gtstring(char line[],int lim);
    int len = 0;
    int c = 0;

    while ((len = (gtstring(line,MAX_COLS)) > -1))
    {
        rmtrailingblanks(line);
        

    }
    

    return 0;
}
