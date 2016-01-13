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
	int var3768422 = 1;
	#ifdef VAR == 1
		var3768422 = (check_vowel(s[i]) == 0) ;
	#endif
	if (var3768422) {       //not a vowel
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
		
	#define PARAM1377543 char c
	
#else
	#define PARAM1377543 ""
#endif
int  check_vowel(PARAM1377543){
	
	#ifdef VAR == 2
		#define VAR3770427 case 'a':  
	#else
		#define VAR3770427 ""
	#endif
	switch (c){
		VAR3770427

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
