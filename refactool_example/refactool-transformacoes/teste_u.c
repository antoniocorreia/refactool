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
	
 int var4272018 =  (strcmp(a,b) == 0);
	#ifdef  VAR ==1
		if(var4272018){

		printf("Entered string is a palindrome.\n");
	
		}
		var4272018 = !(var4272018);
	#else
		var4272018 = 1;
	#endif
	if(var4272018){

		printf("Entered string is not a palindrome.\n");
	
	}

	return 0;
}
