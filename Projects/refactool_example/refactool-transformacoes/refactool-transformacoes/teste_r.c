#include <stdio.h>
#define VAR 64

//C program to change case from upper to lower and lower to upper
 
int main () 
{
	int c = 0;
	char ch, s[1000];
 
	printf("Input a string\n");
	gets(s);
 
	while (s[c] != '\0') {
		ch = s[c];
		if (ch >= 'A' && ch <= 'Z'){
			s[c] = s[c] + 32;
		}
		#ifdef VAR == 1
		else if (ch >= 'a' && ch <= 'z'){
			s[c] = s[c] - 32;   
		c++;   
		}
		#endif
	}
 
	printf("%s\n", s);
 
	return 0;
}
