#define MAXLENGTH 40
#include <stdio.h>

int main()
{
    char line[MAXLENGTH];
    fgets(line,sizeof(line),stdin);
    printf("string is:%s",line);
    return 0;
}
