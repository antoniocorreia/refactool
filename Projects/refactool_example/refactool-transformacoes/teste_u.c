#include <stdio.h>
#include <string.h>
#define VAR 64
 
 
// C palindrome program, c program for palindrome

int main()
{
	char a[100], b[100];
 
	printf("Enter the string to check if it is a palindrome\n");
	gets(a);
 
	strcpy(b,a);
	strrev(b);
	
 int varbc03598e6679436ab0d04c815cf1e6e7 =  (strcmp(a,b) == 0);
#ifdef VAR ==1
	if(varbc03598e6679436ab0d04c815cf1e6e7){
		printf("Entered string is a palindrome.\n");
	}
	varbc03598e6679436ab0d04c815cf1e6e7 = !(varbc03598e6679436ab0d04c815cf1e6e7);
#else
	varbc03598e6679436ab0d04c815cf1e6e7 = 1;
#endif
if(varbc03598e6679436ab0d04c815cf1e6e7){
		printf("Entered string is not a palindrome.\n");
	}
	return 0;
}
