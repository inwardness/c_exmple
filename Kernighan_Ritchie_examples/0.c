#define MAX 30
#include<stdio.h>
#include<string.h>

   
     int main()
    {
     /* char s[30];
      printf("enter anew string:\n");
      while (gets(s)!=EOF)
      {
      
      gets(s);
      
      puts(s);
      }
      */

     char i;
     
     while ((i = getchar())!=EOF)
     {       
      putchar(i);   
      if (i == ' ')
      {
       putchar('\b');
      }
      
      
      
     }
     

    }