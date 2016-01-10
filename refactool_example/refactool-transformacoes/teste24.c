#include <stdio.h>
#include <string.h>
#define SIZE 64
	
	//C program to delete vowels from a string
	 
	int check_vowel(char);
	 
	int main()
	{
	  char s[100], t[100];
	  int i, j = 0;
	 
	  printf("Enter a string to delete vowels\n");
	  gets(s);
	 
	for(i = 0; s[i] != '\0'; i++) {
	int var2785363 = 1;
	#ifdef SIZE == 1
		var2785363 = (check_vowel(s[i]) == 0) ;
	#endif
	if (var2785363) {       //not a vowel
		  t[j] = s[i];
		  j++;
	
	}

	}
	 
	  t[j] = '\0';
	 
	  strcpy(s, t);    //We are changing initial string
	 
	  printf("String after deleting vowels: %s\n", s);
	 
	  return 0;
	}
	 
	 
	#ifdef SIZE == 1
		
	#define PARAM2785363 char c
	
#else
	#define PARAM2785363 ""
#endif
int  check_vowel(PARAM2785363){
	
	#ifdef SIZE == 2
		#define VAR2785363 case 'a':
	
	#else
		#define VAR2785363 ""
	#endif
	switch (c){
		VAR2785363

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