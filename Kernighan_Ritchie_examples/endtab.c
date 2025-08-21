#define TAB 8
#define MAXLINE 1000
#include "stdio.h"

int get1line(char line[],int lim);
void endtab(char line[],int lim);
void clear(char line[],int lim);
char line[MAXLINE];

void clear(char line[],int lim){
    int i;
    for ( i = 0; i < lim; i++){
        line[i] = '\0';
    }
    
}
int get1line(char line[],int lim){
    char c;
    int i;

    for ( i = 0; i < lim & ((c = getchar())!=EOF) & c!='\n'; i++)
        line[i] = c;
            if (line[i] == '\n'){
                line[i] = c;
                ++i;
            }
            line[i] = '\0';
    return i;
}

void endtab(char line[],int lim){
    int i;
    int CharPos = 0;
    int SpcPos = 0;
    for ( i = 0; i < lim; i++){
        if(line[i] == '_'){
            SpcPos++;
            CharPos++;
            if (SpcPos == TAB){
                putchar('\t');
                
            }
        }
        else if(line[i]!='_'){ 
                if (SpcPos > 0){
                    while (SpcPos > 0){
                        SpcPos--;
                        CharPos++;
                        putchar('_');
                    }
                }else{
                    putchar(line[i]);
                    CharPos++;
                } 
            }
        }
}

int main(){
    int length = 0;
    extern int get1line(char line[],int lim);
    extern void endtab(char line[],int lim);

    printf("Enter a string:\n");
    while ((length = get1line(line,MAXLINE)) > 0){
        endtab(line,MAXLINE);
        putchar('\n');
        clear(line,MAXLINE);
    }
    
}