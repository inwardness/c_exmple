#include <stdio.h>
#define MAXLINE 1000
#define TAB 8  

void entab(char line[],int maxline);
int get1line(char line[], int maxline);
void cstring(char line[], int maxline);

int main() {
    char line[MAXLINE];
    cstring(line,MAXLINE);
    printf("Введите строку:\n");
    while (get1line(line, MAXLINE) > 0){
           entab(line,MAXLINE);
           cstring(line,MAXLINE);
           printf("\n");  
    }
    return 0;
}

int get1line(char line[], int maxline) {
    int i, c;
    for (i = 0; i < maxline - 1 && (c = getchar()) != '\0' && c!='\n'; ++i){
        line[i] = c;
    }
        if (c == '\n'){
            line[i] = c; 
            i++;
            line[i] = '\0';
        } 
    return i;
}

void entab(char line[], int maxline) {
    int spacecount = 0;
    int position = 0;
    int spacetoTab = 0;

    for (int i = 0; i < maxline - 1 && line[i]!= '\0' ; ++i){ 
            if (line[i] == ' '){ 
                spacecount++;
                position++;
                }else{
                    position = position - spacecount;
                      while (spacecount > 0){
                            spacetoTab =TAB - (position%TAB);
                                if (spacetoTab > 1 && spacecount >= spacetoTab){
                                    putchar('\t');
                                    spacecount = spacecount - spacetoTab;
                                    position = position + spacetoTab;
                                }else{
                                    while (spacecount > 0){
                                        putchar('_');
                                        spacecount--;
                                        position++;
                                    }
                                }    
                        }
                printf("%c",line[i]);
                position++;       
                }
    }
            if (spacecount > 0) {
                position = position - spacecount;  // откат к началу пробелов
                     while (spacecount > 0) {
                        spacetoTab = TAB - (position % TAB);
                            if (spacetoTab > 1 && spacecount >= spacetoTab) {
                            putchar('\t');
                            spacecount = spacecount - spacetoTab;
                            position = position + spacetoTab;
                            } else {
                            putchar('_');
                            spacecount--;
                            position++;
                            }
                    }
            }
        
}

void cstring(char line[], int maxline){
    int i;
    for (i = 0; i < maxline - 1; i++){
        line[i] = '\0';
    }
}
