#include <stdio.h>
#include <string.h>
#define SIZE 64

//C program check palindrome

int is_palindrome(char*);
void copy_string(char*, char*);
void reverse_string(char*);
int string_length(char*);
int compare_string(char*, char*);

int main()
{
	char string[100];
	int result;

	printf("Input a string\n");
	gets(string);

	result = is_palindrome(string);

 int var1980416 =  ( result == 1 );
	#ifdef  SIZE == 1
		if(var1980416){

		printf("\"%s\" is a palindrome string.\n", string);
	
		}
		var1980416 = !(var1980416);
	#else
		var1980416 = 1;
	#endif
	if(var1980416){

		printf("\"%s\" is not a palindrome string.\n", string);
	
	}

	return 0;
}

#ifdef SIZE ==1
	
	#define PARAM1996042 char *string

#else
	#define PARAM1996042 ""
#endif
int  is_palindrome(PARAM1996042){
	
	int check, length;
	char *reverse;

	length = string_length(string);
	reverse = (char*)malloc(length+1);

	copy_string(reverse, string);
	reverse_string(reverse);

	check = compare_string(string, reverse);

	free(reverse);

int var1980416 =  ( check == 0 );
	#ifdef  SIZE == 2
		if(var1980416){

		return 1;
	
		
}

		var1980416 = !(var1980416);
	#else
		var1980416 = 1;
	#endif
	if(var1980416){

		return 0;
	
	}

}

int string_length(
#ifdef SIZE == 3
	char *string
#end#ifdef SIZE == 3
	#define PARAM1980416 char *string
#else
	#define PARAM1980416 ""
#endif
int  var1980416 = (PARAM1980416){
	int length, c;char *begin, *end, temp;length = string_length(string);begin = string;end = string;for ( c = 0 ; c < ( length - 1 ) ; c++ )end++;for ( c = 0 ; c < length/2 ; c++ ){temp = *end;*end = *begin;*begin = temp;begin++;end--;
}
}int compare_string(char *first, char *second){while(*first==*second){if ( *first == '\0' || *second == '\0' )break;first++;second++;}int var1980416 = ( *first == '\0' 
		var1980416 = var1980416 && *second == '\0' );#ifdef  SIZE == 1if(var1980416){return 0;}var1980416 = !(var1980416);#elsevar1980416 = 1;;
	#endif
	if(var1980416){

		return -1;
	
	}

}
