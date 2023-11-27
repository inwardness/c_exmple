#include <stdio.h>

	int  main(){

		short int c,ce;
		float f;
		printf("Vvedite temperaturu po celsiyou:\n");
		scanf("%d",&ce);
		c=ce;
		f=(ce*(9.0/5.0)+32);
		printf("temperatura po farenheitu:\n %3.1f\n",f);
	}
