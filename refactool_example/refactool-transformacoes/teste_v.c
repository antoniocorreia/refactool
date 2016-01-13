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
	
int var6577438 =  (flag == 0);
	#ifdef  VAR ==1 
		if(var6577438){

		printf("Entered strings are equal.\n");
	
		}
		var6577438 = !(var6577438);
	#else
		var6577438 = 1;
	#endif
	if(var6577438){

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
 
 int var6577438 =  (a[c] == '\0' && b[c] == '\0');
	#ifdef  VAR ==1
		if(var6577438){

		return 0;
	
		}
		var6577438 = !(var6577438);
	#else
		var6577438 = 1;
	#endif
	if(var6577438){

		return -1;
	
	}

}
