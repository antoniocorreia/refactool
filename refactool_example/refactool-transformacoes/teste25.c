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
	
 int var3135117 =  (strcmp(a,b) == 0);
	#ifdef  SIZE ==1
		if(var3135117){

		printf("Entered string is a palindrome.\n");
	
		}
		var3135117 = !(var3135117);
	#else
		var3135117 = 1;
	#endif
	if(var3135117){

		printf("Entered string is not a palindrome.\n");
	
	}

	return 0;
}