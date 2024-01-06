#include <stdio.h>

int main()
{
	char c;
	while ((c = getchar()) != '0')
	{
		if(c == EOF)// in here we insert function getchar in cycle while
		putchar(c);
		
	}
	getchar();
	return c;
}
