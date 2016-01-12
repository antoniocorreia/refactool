#include <stdio.h>
#include <string.h>
#define SIZE 64

//C program to compare two strings without using strcmp
 
int compare_strings(char [], char []); 
 
int main()
{
	int flag;
	char a[1000], b[1000];
 
	printf("Input first string\n");
	gets(a);
 
	printf("Input second string\n");
	gets(b);
 
	flag = compare_strings(a, b);
	
int var8697578 =  (flag == 0);
	#ifdef  SIZE ==1 
		if(var8697578){

		printf("Entered strings are equal.\n");
	
		}
		var8697578 = !(var8697578);
	#else
		var8697578 = 1;
	#endif
	if(var8697578){

		printf("Entered strings are not equal.\n");
	
	}

	return 0;
}
 
int compare_strings(char a[], char b[])
{
	int c = 0;
 
	while (a[c] == b[c]) {
		if (a[c] == '\0' || b[c] == '\0')
			break;
		c++;
	}
 
 int var8697578 =  (a[c] == '\0' && b[c] == '\0');
	#ifdef  SIZE ==1
		if(var8697578){

		return 0;
	
		}
		var8697578 = !(var8697578);
	#else
		var8697578 = 1;
	#endif
	if(var8697578){

		return -1;
	
	}

}