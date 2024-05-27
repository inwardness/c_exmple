#include <stdio.h>
#include <conio.h>
 
int main() {
    int k;
    while((k=getch()) != 13) {
        if(k == 8) {
            putchar('\\'); putchar('b');
        } else if(k == 9) {
            putchar('\\'); putchar('t');
        } else if(k == 8) {
            putchar('\\'); putchar('b');
        } else if(k == '\\') {
            putchar('\\'); putchar('\\');
        } else
            putchar(k);
    }
    return 0;
}