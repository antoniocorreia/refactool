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
		int var4954b7615456465ca728dbdcfd53f44e = (ch >= 'A' && ch <= 'Z');
		if (var4954b7615456465ca728dbdcfd53f44e){
			s[c] = s[c] + 32;
		}
		#ifdef VAR == 1
		if(!(var4954b7615456465ca728dbdcfd53f44e) &&  (ch >= 'a' && ch <= 'z')){
			s[c] = s[c] - 32;   
		c++;   
		}
		#endif
	}
 
	printf("%s\n", s);
 
	return 0;
}
