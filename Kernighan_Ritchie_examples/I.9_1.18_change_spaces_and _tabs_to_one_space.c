/*Write  a  program  to  remove  trailing  blanks  and  tabs  from  each  line  of  input,
and to delete entirely blank lines.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 70

int countchar(char string[], int lim);

int main()
{
    char string[MAX];
    int len = 0;

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

       
       
    }
     return i;
}

/*   for (size_t j = 0; j < lim - 1 || line[j] == EOF; j++)
   {
       line[i] = exchange[j];

       if (line[i] == ' ' || line[i] == '\t')
       {
           ++spaceC;
           if (line[i] == '\t')
           {
               exchange[j] = ' ';
           }
           if (spaceC == 1)
           {
               line[i] = exchange[j];
           }
           else if (spaceC > 1)
           {
               --i;
           }
       }
       else if (line[i] == '\n')
       {
           ++nL;
           if (nL == 1)
           {
               line[i] = exchange[j];
           }
           else if (nL > 1)
           {
               --i;
           }
       }
       else
       {
           nL = 0;
           spaceC = 0;
       }
   }
}
return 0;
}
*/
