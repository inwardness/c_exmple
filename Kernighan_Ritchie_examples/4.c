#include<stdio.h>

#define MAXLINE 1000 /*максимальный размер вводимой строки*/
#define MAX 20
int get1line(char line[],int lim);
void tabsentered(char line[],char tabsline[],int max,int lim)
void copy(char to[],char from[]);

/*печать самой длиной строки*/
int main(int argc, char const *argv[])
{
    int len;/*длина текущей строки*/
    int max;/*длина максимально из просмотренных срок*/
    char line[MAXLINE];/*текущая строка*/
    char longest[MAXLINE];/*самая длиная строка*/
    char tabsline[MAXLINE];
        while ((len = get1line(line,MAXLINE)) > 0)
        {
            if (len < MAX)
            {
                copy(longest,line);
                printf("%s",longest);
            }
            else if( len > MAX)/*была ли хоть одна строка?*/
                {
                    tabsenterd(line,tabsline,MAX,MAXLINE);
                }
            
            printf("%s",line);

        }
        
    return 0;
}

/*getline:  читает строку в s, возвращает длину*/
int get1line(char line[], int lim)
{
    int i,c;
    for(i = 0; i < lim -1 && (c = getchar())!=EOF && c!= '\n';++i)
        line[i] = c;
        if (c == '\n')
        {
            line[i] = c;
            ++i;
        }
        line[i] = '\0';
    return i;       
}

void tabsentered(char line[],char tabsline[],int max,int lim)
{
    int i,j;
    int count = 0;
    int spc = 0;

    for ( i = 0; i < lim - 1; i++)
    {
        for ( j = 0; j < lim - 1; j++)
        {
            ++count;
            if (count < max)
            {
                tabsline[j] = line[i];
            }
            else if (count == max)
            {
                if (line[i] == ' ' && line[i] == '\t')
                {
                    tabsline[j] = '\n';
                    count = 0;
                }
                else if (line[i] != ' ' && line[i] != '\t')
                {
                    for ( i = line[i]; i == ; i++)
                    {
                        /* code */
                    }
                    
                }
                
                
            }
            

        }
        
    }
    
}

/*copy: копирует из from в to; to достаточно большой*/
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i])!='\0')
    ++i;  

}