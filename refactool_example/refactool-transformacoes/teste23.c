#include <stdio.h>
#include <string.h>
#define SIZE 64

//C program to check subsequence

/* Verificar se ocorre erro ao entrar no refactoring 5, 
	o ultimo grupo so pode pegar qualquer coisa ate o proximo #ifdef */
 
int check_subsequence (char [], char[]);
 
int main () {
	int flag;
	char s1[1000], s2[1000];
 
	printf("Input first string\n");
	gets(s1);
 
	printf("Input second string\n");
	gets(s2);
 
	/** Passing smaller length string first */
	#ifdef SIZE ==1
		if (strlen(s1) < strlen(s2)){
			flag = check_subsequence(s1, s2);
		} else
	#endif
		{
			flag = check_subsequence(s2, s1);
		}
	#ifdef SIZE == 1
		if (flag){
			printf("YES\n");
		} else
	#endif
		{
			printf("NO\n");
		}
		return 0;
}
 
 // Verificar se ocorre erro ao entrar no refactoring 9
 
int check_subsequence (
#ifdef SIZE ==1 
	char a[]
#endif	
	, char b[]
) {
	int c, d;
 
	c = d = 0;
 
	while (a[c] != '\0') {
		while ((a[c] != b[d]) && b[d] != '\0') {
			d++;
		}
	int var1851788 = 1;
	#ifdef SIZE == 1
		var1851788 =  (b[d] == '\0');
	#endif
	if (var1851788) {
			break;
	
	}

		d++;
		c++;
	}
#ifdef SIZE ==1
	if (a[c] == '\0'){
		return 1;
	} else
#endif
	{
		return 0;
	}
}