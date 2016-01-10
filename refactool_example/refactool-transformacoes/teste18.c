#include <stdio.h>
#define SIZE 64

int check_anagram(char [], char []);

int main()
{
	char a[100], b[100];
	int flag;

	printf("Enter first string\n");
	gets(a);

	printf("Enter second string\n");
	gets(b);

	flag = check_anagram(a, b);

 int var0578597 =  (flag == 1);
	#ifdef  SIZE == 2
		if(var0578597){

		printf("\"%s\" and \"%s\" are anagrams.\n", a, b);
	
		}
		var0578597 = !(var0578597);
	#else
		var0578597 = 1;
	#endif
	if(var0578597){

      printf("\"%s\" and \"%s\" are not anagrams.\n", a, b);
	
	}

   return 0;
}

int check_anagram(char a[], char b[])
{
	int first[26] = {0}, second[26] = {0}, c = 0;

	while (a[c] != '\0')
	{
		first[a[c]-'a']++;
		c++;
	}

	c = 0;

	while (b[c] != '\0')
	{
		second[b[c]-'a']++;
		c++;
	}

	for (c = 0; c < 26; c++)
	{
	#ifdef c==0
		if (first[c] != second[c])
	#endif
			return 0;
	}

	return 1;
}
