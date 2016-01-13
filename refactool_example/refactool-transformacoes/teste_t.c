#include <stdio.h>
#include <string.h>
#define VAR 64
	
	//C program to delete vowels from a string
	 
	int check_vowel(char);
	 
	int main()
	{
	  char s[100], t[100];
	  int i, j = 0;
	 
	  printf("Enter a string to delete vowels\n");
	  gets(s);
	 
	for(i = 0; s[i] != '\0'; i++) {
	int var9781068 = 1;
	#ifdef VAR == 1
		var9781068 = (check_vowel(s[i]) == 0) ;
	#endif
	if (var9781068) {       //not a vowel
		  t[j] = s[i];
		  j++;
	
	}

	}
	 
	  t[j] = '\0';
	 
	  strcpy(s, t);    //We are changing initial string
	 
	  printf("String after deleting vowels: %s\n", s);
	 
	  return 0;
	}
	 
	 
	#ifdef VAR == 1
		
	#define PARAM8978507 char c
	
#else
	#define PARAM8978507 ""
#endif
int  check_vowel(PARAM8978507){
	
	#ifdef VAR == 2
		#define VAR9781068 case 'a':  
	#else
		#define VAR9781068 ""
	#endif
	switch (c){
		VAR9781068

		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		  return 1;
		default:
		  return 0;
	  
}

	}
