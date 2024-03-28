/*Write  a  program  to  remove  trailing  blanks  and  tabs  from  each  line  of  input,
and to delete entirely blank lines.*/

#include <stdio.h>
#include <stdlib.h>
#define STM 5
#define IMAXLINE 100
#define LIMIT 10


int fgetline(char line[], int lim);
void clearstring(char line[], int lim);

void printstring(char line[], int lim);
int main()
{

    char len = 0;
    char line[IMAXLINE];
    char exchange[IMAXLINE];

    clearstring(line, IMAXLINE);
    clearstring(exchange, IMAXLINE);

   /* do
    {
        clearstring(line, IMAXLINE);
        //len = fgetline(line, IMAXLINE);
     if (len == 1)
        {
          clearstring(line, IMAXLINE);
        }
    else
        {
          clearstring(line, IMAXLINE);
          printstring(line, IMAXLINE);
        }

       
    } while ((len = fgetline(line, IMAXLINE)) != 0);
    
   */
    while ((len = fgetline(line, IMAXLINE)) != '0')
    {
        // spaces_and_tabs(line,exchange,IMAXLINE);
        if (len == 1)
        {
             printf("\r");
        }
        else
        {
            //printf("%d",len);

            printstring(line, IMAXLINE);
            putchar('\n');
            clearstring(line, IMAXLINE);
        }
    }

    return 0;
}

void clearstring(char line[], int lim)
{
    for (size_t i = 0; i < lim - 1; i++)
    {
        line[i] = 0;
    }
}

void printstring(char line[], int lim)
{
    for (size_t i = 0; i < lim - 1; i++)
    {
        printf("%c", line[i]);
    }
}

int fgetline(char line[], int lim)
{
    int i;
    char c;
    int spaceS = 0;
    
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {

      if (c == ' ' || c == '\t')
    {
        ++spaceS;
        
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
    else   if(c == '\n') 
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