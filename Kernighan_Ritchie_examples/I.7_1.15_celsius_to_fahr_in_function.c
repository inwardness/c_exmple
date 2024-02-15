#include <stdio.h>
float fahrenheit(int celsius);

/*расчёт темпераутры по Фаренгейту отдельной функцией*/

int main()
{
	int celsius;
	printf("enter celsius value to interpeted in fahrenheit:");
	scanf("%d",&celsius);
		
	printf("%f",fahrenheit(celsius));
	return 0;
}

/*воводит base в n-ю степень; n>=0*/

float fahrenheit(int celsius)
{
	float fahrenheit;
	fahrenheit = (celsius * (9.0/5.0))+32;
	return fahrenheit;
}
