#include <stdio.h>
#define IMAXLINE 100
int fgetline(char lenInString[], int max);					//function for counting length string
void copy(char to[], char from[]);							//copy function from getin massive to writeout massive
int space(char spaceInStrings[], int max);					//function count spaces in equal string
int main()
{
	int len;
	int max = 0;
	int spc1 = 0;
	int spc2 = 0;

	char lenInStrings[IMAXLINE];
	char spaceInString[IMAXLINE];
	char MaxString[IMAXLINE];

	max = fgetline(lenInStrings, IMAXLINE);
	spc1 = space(lenInStrings, max);
	copy(MaxString, lenInStrings);

	while ((len = fgetline(lenInStrings, IMAXLINE)) > 0)
	{
		if (len == max)
		{
			spc2 = space(lenInStrings, max);
			if (spc2 > spc1)
				copy(MaxString, lenInStrings);
		}
		else if (len > max)
		{
			max = len;
			copy(MaxString, lenInStrings);
		}
	}
	printf("\n%s\n", MaxString);
	printf("symbols in first max string lenInStrings:%d\n", spc1);
	printf("symbols in equal string lenInStrings:%d\n", spc2);
	printf("symbols in row:%d\n", max);

	return 0;
}

int space(char spaceInStrings[], int max)
{
	int m = 0;
	int i;
	for (i = 0; i < max - 1; ++i)
		if (spaceInStrings[i] != ' ')
			++m;
	return m;
}
int fgetline(char lenInStrings[], int maxline)
{
	int c, i;
	int max;
	for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		lenInStrings[i] = c;
	if (c == '\n')
	{
		lenInStrings[i] = c;
		++i;
	}
	lenInStrings[i] = '\0';

	return i;
}

void copy(char to[], char from[])
{
	char i;
	while ((to[i] = from[i]) != '\0')
		i++;
}
