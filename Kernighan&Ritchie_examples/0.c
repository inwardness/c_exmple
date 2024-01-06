#include <stdio.h>

int main()
{
    int *pc,c;

    c = 50;

    pc = &c;

    printf("pc = %d\n",pc);
    printf("pc = %d\n",*pc);
    printf("pc = %p\n",*pc);
    printf("c = %d\n",c);
    printf("c = %p\n",c);
    printf("c = %d\n",c);
}