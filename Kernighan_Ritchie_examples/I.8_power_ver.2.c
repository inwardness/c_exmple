#include<stdio.h>
/*power:involve base in n-power: n>=0; ver.2*/


int power(int m,int n);

/*тест функции power*/

int main()
{
	int i;
	for (i=0;i<10;++i)
		printf("%d %d %d\n",i,power(2,i),power(-3,i));
	return 0;
}

int power(int base, int n)
{
    int p;
    for ( p = 1; n > 0; --n)
    
    p = p * base;
    return p;
    
    
}