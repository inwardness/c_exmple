#include<stdio.h>
#include<ctype.h>

int main(){
    char c;
    int spaceS = 0;
    
    
    while (c != EOF){
    c = getchar();
       
        if (c == ' ' || c == '\t')
        {
            ++spaceS;            
          if (c == '\t')
          {
            c = ' ';
          }
          
          if (c == ' ')
            {
               if(spaceS == 1)
                {
                putchar(c);
                }
              else if(spaceS > 1)
                {
                 putchar(c); 
                 putchar('\b');
                --spaceS;
                }
            }
          if (c == '\n')
          {
            c = getchar();
            if (c == '\n')
            {
              putchar('\r');
            }
                        
          }
          
        }
        else{ 
            spaceS = 0; 
            putchar(c); 
            }
    }
    return 0;
}
    
    
