// first program C with using localization header for russian language output
//for switching utf-8 for russia language in console: COntrol Panel/Language/Region standarts/Addition/Choose sysytem language -> use unicode UTF_8
	
#include <stdio.h>
#include <locale.h>

 
int main () 
{
    
	setlocale(LC_ALL,0);
        printf("Приведт\n ") ;
    
    return 0 ;
    
}