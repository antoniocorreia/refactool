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
	
 int var0210355 =  (strcmp(a,b) == 0);
	#ifdef  VAR ==1
		if(var0210355){

		printf("Entered string is a palindrome.\n");
	
		}
		var0210355 = !(var0210355);
	#else
		var0210355 = 1;
	#endif
	if(var0210355){

		printf("Entered string is not a palindrome.\n");
	
	}

	return 0;
}
