#include <stdio.h>
#include <string.h>
#define VAR 64

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
	
int var1fa9958c54df4a7ab2687736647200b3 =  (flag == 0);
#ifdef VAR ==1 
	if(var1fa9958c54df4a7ab2687736647200b3){
		printf("Entered strings are equal.\n");
	}
	var1fa9958c54df4a7ab2687736647200b3 = !(var1fa9958c54df4a7ab2687736647200b3);
#else
	var1fa9958c54df4a7ab2687736647200b3 = 1;
#endif
if(var1fa9958c54df4a7ab2687736647200b3){
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
 
 int var44c63e7a6aa34caba794572ba2718568 =  (a[c] == '\0' && b[c] == '\0');
#ifdef VAR ==1
	if(var44c63e7a6aa34caba794572ba2718568){
		return 0;
	}
	var44c63e7a6aa34caba794572ba2718568 = !(var44c63e7a6aa34caba794572ba2718568);
#else
	var44c63e7a6aa34caba794572ba2718568 = 1;
#endif
if(var44c63e7a6aa34caba794572ba2718568){
		return -1;
	}
}
