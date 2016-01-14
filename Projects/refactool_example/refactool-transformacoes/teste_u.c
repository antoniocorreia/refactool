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
	
 int var3571677b211a4012bf9a405efb65f829 =  (strcmp(a,b) == 0);
#ifdef VAR ==1
	if(var3571677b211a4012bf9a405efb65f829){
		printf("Entered string is a palindrome.\n");
	}
	var3571677b211a4012bf9a405efb65f829 = !(var3571677b211a4012bf9a405efb65f829);
#else
	var3571677b211a4012bf9a405efb65f829 = 1;
#endif
if(var3571677b211a4012bf9a405efb65f829){
		printf("Entered string is not a palindrome.\n");
	}
	return 0;
}
