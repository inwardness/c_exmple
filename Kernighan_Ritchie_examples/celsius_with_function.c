#include <stdio.h>
#define step 20
float ffahr(float c);
	int main(){
	float fhar,i,upper,down;
	
	printf("enter up and down temperature to fahrenheit\n");
	printf("enter up:");
	scanf("%f",&upper);
	printf("enter down:");
	scanf("%f",&down);
	if (upper<down){
		printf("not correct entiers\n");
		}else{
			for (i=down;i<upper;i=(i+step)){
				fhar=i;
			printf("fahr= %.2f,cel= %.2f\n",fhar,ffahr(fhar));
			}
		}
	
	
	return 0;
		
	}
		
float ffahr(float c){
	float fhar;
	fhar=(c*9.0/5.0)+32.0;
	return fhar;
	}
