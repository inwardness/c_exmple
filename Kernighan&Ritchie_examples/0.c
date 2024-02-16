#include <stdio.h>
#define N 15
int main (){
	int count_length,count_new_word,i; 									
    char c;												
    int w[N];											
    count_length=count_new_word=0;			 	 		
    for(i=0;i<N;++i) w[i]=0;						 	
		while((c=getchar())!=EOF){
			if(c!=' '&&c!='\n'){
				++count_length;
				printf("%d",count_length);
				 if(c==' '&&c=='\n'){
					printf("%d",count_length);
						if(w[i]==0){
						w[i]=count_length;
						++i;
						count_length=0;
						}else 
							if(w[i]!=0){
								++i;
								w[i]=count_length;
								count_length=0;
								}
						}
					}
			}
			for(i=0;i<N;++i){
				if(w[i]>=0){
				printf("-");
				--w[i];						
				}
			}
		
			
      return 0;
}


