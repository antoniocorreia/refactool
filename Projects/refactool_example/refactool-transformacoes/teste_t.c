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
	int var82561192432547eca40a4c9ab299cad5 = 1;
	#ifdef VAR == 1
		var82561192432547eca40a4c9ab299cad5 = (check_vowel(s[i]) == 0) ;
	#endif
	if (var82561192432547eca40a4c9ab299cad5) {       //not a vowel
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
		#define PARAM5254f0f3ef1d48d688dc30a24b93c7e9 char c
	#else
		#define PARAM5254f0f3ef1d48d688dc30a24b93c7e9 ""
	#endif
	int check_vowel(PARAM5254f0f3ef1d48d688dc30a24b93c7e9){
	#ifdef VAR == 2
		#define var25e1c42b39e7467e8bb17b77c60794e3 case 'a':  
	#else
		#define var25e1c42b39e7467e8bb17b77c60794e3 ""
	#endif
	switch (c){
		var25e1c42b39e7467e8bb17b77c60794e3
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
