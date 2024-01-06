// first program C with using localization header for russian language output
#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Ru"); /*first out program*/
	printf("i'm try to find mnemonic code 0x21\n");
	printf("тестирую функцию локалей для форматированного вывода русского языка\n");
}
