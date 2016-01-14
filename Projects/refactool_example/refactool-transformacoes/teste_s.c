#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VAR 64
 
 // C program to sort a string in alphabetic order using pointers
 
void sort_string(char*);
 
int main()
{
	char string[100];
 
	printf("Enter some text\n");
	gets(string);
 
	sort_string(string);
	printf("%s\n", string);
 
	return 0;
}
 #ifdef VAR == 1
	#define PARAMd760376b8ff24023aa83e04f14913cdb char *s
#else
	#define PARAMd760376b8ff24023aa83e04f14913cdb ""
#endif
void sort_string(PARAMd760376b8ff24023aa83e04f14913cdb){
	int c, d = 0, length;
	char *pointer, *result, ch;
 
	length = strlen(s);
 
	result = (char*)malloc(length+1);
 
	pointer = s;
 
	for ( ch = 'a' ; ch <= 'z' ; ch++ )
	{
		for ( c = 0 ; c < length ; c++ )
		{
		int var8824fc32619a4941a20babacdd7061b4 = 1;
		#ifdef VAR == 1
			var8824fc32619a4941a20babacdd7061b4 =  ( *pointer == ch );
		#endif
		if (var8824fc32619a4941a20babacdd7061b4) {
				*(result+d) = *pointer;
				d++;
			}
			pointer++;
		}
		pointer = s;
	}
	*(result+d) = '\0';
 
	strcpy(s, result);
	free(result);
}
