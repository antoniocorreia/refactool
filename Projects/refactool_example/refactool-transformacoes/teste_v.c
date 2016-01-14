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
	
int var40609b693ee043d8974a464336abecd5 =  (flag == 0);
#ifdef VAR ==1 
	if(var40609b693ee043d8974a464336abecd5){
		printf("Entered strings are equal.\n");
	}
	var40609b693ee043d8974a464336abecd5 = !(var40609b693ee043d8974a464336abecd5);
#else
	var40609b693ee043d8974a464336abecd5 = 1;
#endif
if(var40609b693ee043d8974a464336abecd5){
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
 
 int varfb0e73d574854f8ea21416bd9bc5723c =  (a[c] == '\0' && b[c] == '\0');
#ifdef VAR ==1
	if(varfb0e73d574854f8ea21416bd9bc5723c){
		return 0;
	}
	varfb0e73d574854f8ea21416bd9bc5723c = !(varfb0e73d574854f8ea21416bd9bc5723c);
#else
	varfb0e73d574854f8ea21416bd9bc5723c = 1;
#endif
if(varfb0e73d574854f8ea21416bd9bc5723c){
		return -1;
	}
}
