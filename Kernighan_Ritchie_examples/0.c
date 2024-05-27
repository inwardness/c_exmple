/* 
 * Exercise 1-18
 * Write a program to remove trailing blanks and tabs from each line of input, 
 * and to delete entirely blank lines.
 */

#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void trim(char s[], int length);

int main() {
    int len,i;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
      printf("%d",len);
        trim(line, len);
        if (line[0] != '\n')
            for (size_t i = 0; i < line[i]; i++)
            {
               len = i;
            }
            
            printf("%s", line);
            printf("%d",len);
    }

    return 0;
}

int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') s[i++] = c;
    s[i] = '\0';
    return i;
}

void trim(char line[], int length) {
    int i;

    for (i = length - 2; i >= 0 && (line[i] == ' ' || line[i] == '\t'); i--)
        ;
    line[++i] = '\n';
    line[++i] = '\0';

}