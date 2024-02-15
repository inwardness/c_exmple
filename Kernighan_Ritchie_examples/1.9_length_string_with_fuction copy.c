#include <stdio.h>
//#define IMAXLINE 1000				/*max length string*/
int fgetline(char line[], int lim); // in here we declarate our function for get input chars in massive line with second declare 										//parametre of his lenght
void copy(char to[], char from[]);		// in here copy char from one massive to other

int main()
{
	int len;
	int max;
	int IMAXLINE = 1000;
	char line[IMAXLINE];	   // this massive declare as char whith limits symbol 1000
	char longest[IMAXLINE]; // this case similar
	max = 0;
	while ((len = fgetline(line, IMAXLINE)) > 0) // we get our string until it not equal zero
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest); // print our string from massive longest where every element is string of massive line
	return 0;
}
int fgetline(char s[], int IMAXLINE)
{ // function to get symbol from standart input by condition and move to massive
	int c, i;
	for (i = 0; i < IMAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) // in here we've got a massive of entered symbols
		s[i] = c;															 // every symbol sets into the element of array
	if (c == '\n')
	{ // while we don't get a symbol of next string
		s[i] = c;
		++i;
	}
	s[i] = '\0'; // puts him like a end of line

	return i; // return amount of element massive
}

void copy(char to[], char from[]) // in here function we've copy element by element from massive to massive
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0') // by condition copy end if symbol equals end of line
		++i;
}
