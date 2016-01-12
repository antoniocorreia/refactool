#include <stdio.h>
#define SIZE 64

//C program to change case from upper to lower and lower to upper
 
int main () 
{
	int c = 0;
	char ch, s[1000];
 
	printf("Input a string\n");
	gets(s);
 
	while (s[c] != '\0') {
		ch = s[c];
		int var9214509 =  (ch >= 'A' && ch <= 'Z');
	if (var9214509){

			s[c] = s[c] + 32;
		
	}
	#ifdef SIZE == 1		
		 if(!(var9214509) &&  (ch >= 'a' && ch <= 'z')){

			s[c] = s[c] - 32;   
		c++;   
		
		}
	#endif
	}
 
	printf("%s\n", s);
 
	return 0;
}