	#include<stdio.h>
	#define MAXLINE 100
		int fgetline(char length[],int max);			//function to get a sum of characters in array
		void copy(char to[],char from[]);
		int space(char lengths[],int max);		//function copy element by element from on array to other
	int main()
		{ 
  		int sl=0;
  		int fl=0;	
 		int len;								//length of inputs line to compare
  		int max=0;
  		int spc1=0;
  		int spc2=0;	 
  	char lengths[IMAXLINE];
	char length[IMAXLINE];							//array to inputs character length of 100
	char maxlength[IMAXLINE];
	max=fgetline(length,IMAXLINE);
	spc1=space(length,max);
	copy(maxlength,length);	
while((len=fgetline(length,IMAXLINE))>0)
    { if(len==max){
	spc2=space(length,max);	
		 if(spc2>spc1)
		 copy(maxlength,length);
		  }
        else if(len>max){
		max=len;
		copy(maxlength,length);
		}
		  
    }
	printf("\n%s\n",maxlength);
	printf("symbols in first max string length:%d\n",spc1);
	printf("symbols in equal string length:%d\n",spc2);
	printf("symbols in row:%d\n",max);
	
     return 0;
     }

int space(char lengths[],int max)
{	int m=0;
  	int i;
	for (i=0;i<max-1;++i)
	if (lengths[i]!=' ')
	++m;
	return m;
	}	
int fgetline(char length[],int maxline)
{	int c,i;
	int max;	
	for(i=0;i<maxline-1&&(c=getchar())!=EOF&&c!='\n';++i)
	length[i]=c;
	if (c=='\n'){
	length[i]=c;
	++i;
	}
	length[i]='\0';

	return i;
}

void copy(char to[],char from[])
{	char i;
	while((to[i]=from[i])!='\0')
		i++;
}

