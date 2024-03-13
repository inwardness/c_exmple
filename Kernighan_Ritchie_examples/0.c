#include <stdio.h>
#include <string.h>

// string.h function:
//

// int main()
// {
/*String Declaration*/
//   char nickanme[20];

//  printf("Enter your Nick name:");

/*I am a reading the input string and storing  it in name
 *Array name alone works as a base address of array so
 *we can use array instead of &nickname here
 */

//  scanf("%s",nickanme);

/*Display String*/
//  printf("%s",nickanme);

//}

int main()
{
   /*String Declaration*/
   char nickanme[20];

   /*Console display using puts*/
   printf("Enter your Nick name:");

   /*Input using gets*/
   scanf("%s", nickanme);

   printf("%s\n", nickanme);
}