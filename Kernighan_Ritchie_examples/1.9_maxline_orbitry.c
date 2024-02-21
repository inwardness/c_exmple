#include <stdio.h>
#define IMAXLINE 100
int fgetline(char length[], int max); // function to get a sum of characters in array
void copy(char to[], char from[]);	  // function copy element by element from on array to other
int main()
{
	int max = 0;								   // initialize of value control length
	int len;									   // length of inputs line to compare
	char line[IMAXLINE];						   // array to inputs character length of 101
	char maxlength[IMAXLINE];					   // array to copy maximal string length of 100
	char minlength[IMAXLINE];					   // in this array we copy character control length
	max = fgetline(length, IMAXLINE);			   // in here we'd get a maximum value of characters in length
	while ((len = fgetline(length, IMAXLINE)) > 0) // cycle for get sring and her length while length in not by zero
	{
		if (len > max) // compare control and get length
		{
			copy(minlength, length); // copy to intermedia array
		}
	}
	for (i = 0; i < max - 1; ++i)	 // inizialize array for control length
		maxlength[i] = minlength[i]; // copyies elements of array control length
	printf("%s\n", maxlength);		 // print control size of length by maxsimum string
	return 0;
}

int fgetline(char length[], int maxline)
{
	int c, i;
	int max;
	for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		length[i] = c;
	if (c == '\n')
	{
		length[i] = c;
		++i;
	}
	length[i] = '\0';

	return i;
}

void copy(char to[], char from[])
{
	char i;
	while ((to[i] = from[i]) != '\0')
		i++;
}
