#include <stdio.h>
#define N 30
int main ()
{
    int length,neww,i; 					/*length -counter of symbol in word, neww - counter new word,i-index array*/
    char c;						/*c-input charcter*/
    int w[N];
    int big=0;    /*w[N]-massive */
    length=neww=0;					/*inicialization of variables*/
    for (i=0;i<N;++i)					/*inicialization massive to zero*/
    w[i]=0;
    while((c=getchar())!=EOF){				//array filling
    if(c!=' '&&c!='\n'){++length;			//starts counter to word length by condition
      }else if(length>0){++neww;			//starts counter word position and stop counter length
    for(i=0;i<N;++i)		               		//inicialized array to write length word
       if(w[i]==0){					//writing in first element by the value zero
	  w[i]=length;					//take  value to element of massive
	  ++i;						//going to the next element
	  length=0;}					//drop counter
	}
    }
    for(i=0;i<N;++i)					//inicialize array for value that's doesn't writing after EOF from counter length
      if (w[i]==w[neww])				//for position elements equals values getting words counter
	    w[i]=length;				//assignment vlaue
//	for(i=0;i<N;++i)
//   printf("%d\n",w[i]);
//    putchar('\n');
//    printf("%d\n%d\n",length,neww);
    big=15;
    while(big>0){
    for(i=0;i<N;++i) 
	    if(w[i]>=big)
		   putchar('|');
	    else
		   putchar(' ');
	    
	    putchar('\n');
	    --big;}
    printf("\n");
    return 0;
}


