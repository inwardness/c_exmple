#include "stdio.h"
const int lim = 1000; // while i don't write *const int* i'll teake a error of type function getline.And else function
					  // getline is basic in c and don't want compile
int fgetline(unsigned char line[], int);			// in here we declarate our function for get input chars in massive line with second declare 										//parametre of his lenght
int copy(unsigned char to[], unsigned char from[]); // in here copy char from one massive to other

int main()
{
	int n, sum;
	int len;
	int max;

	unsigned char line[lim];	// this massive declare as char whith limits symbol 1000
	unsigned char longest[lim]; // this case similar
	max = 0;
	while ((len = fgetline(line, lim)) > 0) // we get our string until it not equal zero
		if (len > max)
		{			   // len compare value of count od line parametre in function fgetline with value of maximum
					   // for start it's zero
			max = len; // by condition jump of value len function copy symbol by symbol copy massive of string from
					   // line to longest
			copy(longest, line);
		}

	if (max > 0)
		printf("%s", longest); // print our string from massive longest where every element is string of massive line
	return 0;
}
int fgetline(unsigned char s[], int lim)
{ // function to get symbol from standart input by condition and move to massive
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) // in here we've got a massive of entered symbols
		s[i] = c;														 // every symbol sets into the element of array
	if (c == '\n')
	{ // while we don't get a symbol of next string
		s[i] = c;
		++i;
	}
	s[i] = '\0'; // puts him like a end of line

	return i; // return amount of element massive
}

int copy(unsigned char to[], unsigned char from[]) // in here function we've copy element by element from massive to massive
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0') // by condition copy end if symbol equals end of line
		++i;
}
