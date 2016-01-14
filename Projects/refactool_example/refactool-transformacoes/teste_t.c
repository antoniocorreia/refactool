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
	int var0058134c6541487e906998ad79632a37 = 1;
	#ifdef VAR == 1
		var0058134c6541487e906998ad79632a37 = (check_vowel(s[i]) == 0) ;
	#endif
	if (var0058134c6541487e906998ad79632a37) {       //not a vowel
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
		#define PARAMa9350afe9bdd46df80fc6c3f86981baa char c
	#else
		#define PARAMa9350afe9bdd46df80fc6c3f86981baa ""
	#endif
	int check_vowel(PARAMa9350afe9bdd46df80fc6c3f86981baa){
	#ifdef VAR == 2
		#define var793b3b4f678c41d2a6b1ff4b5e5c6998 case 'a':  
	#else
		#define var793b3b4f678c41d2a6b1ff4b5e5c6998 ""
	#endif
	switch (c){
		var793b3b4f678c41d2a6b1ff4b5e5c6998
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
