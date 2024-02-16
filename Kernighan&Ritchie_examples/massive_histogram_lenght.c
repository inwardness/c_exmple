#include <stdio.h>
#define N 15
int main ()
{
    int count_length,count_new_word,i; 									/*length -counter of symbol in word, neww - counter new word,i-index array*/
    char c;												/*c-input charcter*/
    int w[N];											/*w[N]-massive */
    count_length=count_new_word=0;			 	 		/*inicialization of variables*/
    for(i=0;i<N;++i) w[i]=0;						 	/*inicialization massive to zero*/
		while((c=getchar())!=EOF){		 				//array filling
		 if(c!=' '&&c!='\n'){
		    ++count_length;							 	//starts counter to word length by condition
		    }
			else if(c==' '&&c=='\n'){
		    ++count_new_word;		   					//starts counter word position and stop counter length
				for(i=0;i<N;++i){		               	//inicialized array to write length word
			       if(w[i]==0){ 			 	   		//writing in first element by the value zero
					  w[i]=count_length;	  			//take  value to element of massive
					  ++i;								//going to the next element
					  count_length=0;
				    	}								//drop counter
		     }
		 }
		 
		}
    for(i=0;i<N;++i)									//inicialize array for value that's doesn't writing after EOF from counter length
   //   if (w[i]==w[count_length])				 		//for position elements equals values getting words counter
	//    w[i]=count_length;						   		//assignment vlaue
   // for(i=0;i<N;++i)									//inicialized array for printing signs by the value of  element massive
	   while(w[i]>0)
		{												//here we start to find elements
				--w[i];									//while we decremeting values of massive 
				printf("-");							//printing symbol
					if(w[i]==0) 						//is there we check if the value of elements are equal zero 
					printf("\n");
			}
														//if yes,we decrementing next element and getting him on the new line
  
			
    return 0;
}


