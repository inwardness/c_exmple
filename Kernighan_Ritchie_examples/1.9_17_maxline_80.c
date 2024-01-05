#include <stdio.h>
#define MAXLINE 1000
#define LIMIT 10
int fgetline(char line[], int lim);
void copy(char from[], char to[]);
int main() {
    int len,i,j;
    char line[MAXLINE];
    char ML[4][MAXLINE]; 
 //   char ML2[MAXLINE];
  //  char ML3[MAXLINE];
 //   char ML4[MAXLINE];
 	for(j=0;j<4;++j)
		ML[j]==0;
    while ((len = fgetline(line, MAXLINE)) > 0) {
         if(len > 5){
            for(j=0;j<4;++j){
		 for(i=0;i<MAXLINE-1;++i)
		if(fgetline(ML[j],MAXLINE)!=0)
		copy(ML[j],line);	
	 	++j;	 
	 }
         }
	 }
            printf("%s",ML);
    
    return 0;
}
int fgetline(char line[], int lim) {
    int i, c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
  // line[i] = '\0';
    return i;
}

void copy(char from[],char to[]){
	char i;
	i=0;
	while((from[i]=to[i])!='\0')
	++i;
}
