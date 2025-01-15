#include <stdio.h>
#define MAXLINE 1000
int get1line(int line[], int lim);
int line[MAXLINE];
int main()
{
    int c,i;
    int len = 0;
    int count = 0;
    int tabedge = 0;
    extern int line[];
    extern int get1line();
    printf("entered a length string fot tabs right edge:\n");
    //  scanf("%d",&tabedge);
    while ((len = get1line(line, MAXLINE)) > -1)
    {
<<<<<<< HEAD
        //printf("%d\n", len);
        if (len > 0)
        {
            printf("%s", line);
        }
    }

=======
            printf("%s", line);
     
    }
>>>>>>> 3b5657f (	modified:   Kernighan_Ritchie_examples/2.c)
    return 0;
}

int get1line(int line[], int lim)
{
    int c, i;

<<<<<<< HEAD
    for (i = 0; i < lim && (c = getchar()) != EOF && c!='\n'; i++)
    
        line[i] = c;
        if (c == '\n')
        {
            line[i] = c;
            i++;
        }
        line[i] = '\0';    
    
=======
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF; i++)
{
    line[i] = c; 

        if (c == '\n')
        {
            line[i] = c;
            ++i;
        }
        
    line[i] = '\0';    
}    
>>>>>>> 3b5657f (	modified:   Kernighan_Ritchie_examples/2.c)
    return i;
}