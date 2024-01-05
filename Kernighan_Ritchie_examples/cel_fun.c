#include <stdio.h>
#define step 20
float cel(float fahr);
	int main(){
	float upper,down,i;
	printf("enter up and down temperature to fahrenheit\n");
	printf("enter up:");
	scanf("%f",&upper);
	printf("enter down:");
	scanf("%f",&down);
	if (upper<down){
		printf("threshold temperature invalid");
	}
	if (upper>down){
		i=upper;
		for(i=upper;i>=down;i=i-step)
		printf("fahr=%.2f celsius=%.2f\n",i,cel(i));
	}
		return 0;
		
	}
		
float  cel(float fahr){
	
	float celsius;
	celsius=(5.0)*((fahr-32.0)/9.0);
	return celsius;
	}
