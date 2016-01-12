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
	int var2711208 = 1;
	#ifdef SIZE == 1
		var2711208 = (check_vowel(s[i]) == 0) ;
	#endif
	if (var2711208) {       //not a vowel
		  t[j] = s[i];
		  j++;
	
	}

	}
	 
	  t[j] = '\0';
	 
	  strcpy(s, t);    //We are changing initial string
	 
	  printf("String after deleting vowels: %s\n", s);
	 
	  return 0;
	}
	 
	 
	int check_vowel(
	#ifdef SIZE == 1
		char c
	#endif
	){
	switch(c) {
	#ifdef SIZE == 2
		case 'a':
	#endif
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