#include<stdio.h>
#include<math.h>

int main()
{	 
	float frequency;
	float V;
	float inch = 25.4;
	float mm8 = (inch/8);
	float mm4 = (inch/4);
	float mm3_8 = ((inch/8)*3);
	float mm2 = (inch/2);
	float mm5_8 = ((inch/8)*5);
	float mm3_4 = ((inch/4)*3);
	float mm7_8 = ((inch/8)*7 );
	float l1,l2,l3,l4,l5,l6,l7,l8,l9;
	puts("table of frenqucy and length in inch and mm");
	printf("G-144-174Mhz model 3dB 5/8 wave mobile\n");
	printf("MHz\tInches\t\tmm\n");
	printf("144\t 48-1/8\"\t %f\n", l1 = 48*inch+mm8);
	printf("146\t 47-1/4\"\t %f\n", l1 = 47*inch+mm4);
	printf("148\t 46-3/8\"\t %f\n", l1 = 46*inch+mm3_4);
	printf("150\t 45-1/2\"\t %f\n", l1 = 42*inch+mm2);
	printf("152\t 44-7/8\"\t %f\n", l1 = 44*inch+mm7_8);
	printf("154\t 43-3/4\"\t %f\n", l1 = 43*inch+mm3_4);
	printf("156\t 42-7/8\"\t %f\n", l1 = 42*inch+mm7_8);
	printf("158\t 42-1/8\"\t %f\n", l1 = 42*inch+mm8);
	printf("160\t 41-1/4\"\t %f\n", l1 = 41*inch+mm4);
	printf("162\t 40-1/2\"\t %f\n", l1 = 40*inch+mm2);
	printf("164\t 39-1/2\"\t %f\n", l1 = 39*inch+mm2);
	printf("166\t 38-3/4\"\t %f\n", l1 = 39*inch+mm3_4);
	printf("168\t 38\"\t\t %f\n", l1 = 38*inch);
	printf("170\t 37-1/8\"\t %f\n", l1 = 37*inch+mm8);
	printf("172\t 36-3/8\"\t %f\n", l1 = 36*inch+mm3_8);
	printf("174\t 35-7/8\"\t %f\n", l1 = 35*inch+mm7_8);
	while (frequency!=EOF)
	{
		puts("Enter a value of frequency to compute a length rod:");
		scan("%f",&frequency);
		puts("velocity of ligth - V:299 792 458 [m/s] ");
		printf()
	}
	
	 
}