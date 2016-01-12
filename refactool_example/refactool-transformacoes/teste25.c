#include <stdio.h>
#include <string.h>
#define SIZE 64
 
 
// C palindrome program, c program for palindrome

int main()
{
	char a[100], b[100];
 
	printf("Enter the string to check if it is a palindrome\n");
	gets(a);
 
	strcpy(b,a);
	strrev(b);
	
 #ifdef SIZE ==1
	if (strcmp(a,b) == 0){
		printf("Entered string is a palindrome.\n");
	} else
#endif
	{
		printf("Entered string is not a palindrome.\n");
	}
	return 0;
}