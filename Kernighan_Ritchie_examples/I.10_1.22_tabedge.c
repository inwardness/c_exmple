#include <stdio.h>
#define MAXLINE 1000

int get1line(char line[], int lim);
void cstring(char line[], int lim);
void fold1tab(char line[], int lim);

int main(){
    int len = 0;
    char line[MAXLINE];

    while ((len = get1line(line, MAXLINE)) > 0)
    {
        fold1tab(line,MAXLINE);
       // printf("%s",line);
        cstring(line,MAXLINE);
    }

    return 0;
}

int get1line(char line[], int lim){
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != '\0' && c != '\n'; i++){  
        line[i] = c;
    }
        if (c == '\n'){
            line[i] = c;
            i++;
        }
        line[i] = '\0';
    return i;
}

void cstring(char line[], int lim){
    int i;
    for ( i = 0; i < lim - 1; i++){
        line[i] = '\0';
    }
}

void fold1tab(char line[],int lim){
    int i;
    int spcpos = 0;
    int counter = 0;
    for ( i = 0; i < lim - 1 && line[i]!='\0'; i++){
        counter++;
        if (line[i] == ' ' ||  line[i] == '\t')
        {
            spcpos = i;
        }
        if (counter == 15 && (line[i] == ' ' || line[i] == '\t'))
        {
            putchar('\n');
            counter = 0;
            spcpos = 0;
        }
        else if (counter == 15 && (line[i]!=' ' || line[i]!='\t'))
        {
            if (spcpos > 0)
            {   
                while (spcpos < i)
                {
                    i--;
                }
            putchar('\n');
            counter = 0;
            spcpos = 0;
            }
            else
            {
            putchar('\n');  
            }
        
        }
        printf("%c",line[i]);
    }
}