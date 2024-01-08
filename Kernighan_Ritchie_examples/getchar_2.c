#include<stdio.h>
	 int main()
{ 						/*input to output take*/
	 int c;		
	 	c=getchar();
	           while(c!=EOF)
			{putchar(c);
			c=getchar();
				}	
			if(c==EOF){
				printf("%d",EOF);
				putchar('1');
			}else
				putchar('0');
			
			putchar('\n');
			return 1;
}
