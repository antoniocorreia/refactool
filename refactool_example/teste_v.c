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
	
#ifdef SIZE ==1 
	if (flag == 0){
		printf("Entered strings are equal.\n");
	} else
#endif
	{
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
 
 #ifdef SIZE ==1
	if (a[c] == '\0' && b[c] == '\0'){
		return 0;
	} else
#endif
	{
		return -1;
	}
}