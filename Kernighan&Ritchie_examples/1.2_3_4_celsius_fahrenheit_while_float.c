#include <stdio.h>

	int main() 
{								/*program to find value fahrenheit with wile cyle*/
	int lower =0;						/*low threshold value*/
	int upper =300;						/*up limit*/
	int step  = 20;						/*increment step*/
	float cels,fahr;
	fahr =lower;

			/*assignment value to fahr*/					
	printf("celsius:\tfahrenheit:\n");
	while (fahr<=upper)				/*cycle from assigned value fahr to upper while condition in body function does not done*/
	{							/*entering cycle*/
		cels =(5.0*(fahr-32.0)/9);			/*assingned to celsius value*/
		printf("\b%3.1f\t-- %.1f\n",cels,fahr);	/*fuction output values in float range:fahr and celsius*/
		fahr =fahr+step;				/*add step value to fahr condition*/
	} 
     
    }\
