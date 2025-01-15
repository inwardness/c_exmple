#include<stdio.h>
#define MAXLINE 100

char line[MAXLINE];
char cutline[MAXLINE];
int getline[line,MAXLINE];

int main(int argc, char const *argv[]){
    int len=0;
    int max=20;
    while ((len = getline(line,MAXLINE))>0){
        if (len > 0){
            if (len < max){
                printf("%s",line);
            }
            
        }
        
    }
    
    return 0;
}
