#include <stdio.h>
int main()
{
	int c, space;
	space = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++space;
		if ((c != ' ') && (space == 0))
			putchar(c);
		if ((c != ' ') && (space != 0))
		{
			putchar(' ');
			putchar(c);
			space = 0;
		}
	}
}
