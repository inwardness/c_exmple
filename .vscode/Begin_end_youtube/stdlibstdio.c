#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"ru_RU.UTF-8"); 
   /*  char ch = 'W';
    printf("%c\n",ch);

    ch = getch();
    printf("ch = %c\n",ch);
 */

    char s[10] = "првапрвапр";
    s[0] = 's';
    printf("%s\n",s);

    sprintf(s,"dsf adfasdfa");

    s[4] = '\0';
    printf("%s\n",s);

    scanf("%s",s);
    OemToChar(s,s);
     printf("%s",s);
}