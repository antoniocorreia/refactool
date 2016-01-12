#include <stdio.h>
#include <string.h>
#define SIZE 64
 
int main()
{
	char string[100];
	int c = 0, count[26] = {0};
 
	printf("Enter a string\n");
	gets(string);
 
	while (string[c] != '\0')
	{
      /** Considering characters from 'a' to 'z' only
          and ignoring others */
	int var9089487 = 1;
	#ifdef SIZE == 1
		var9089487 =  (string[c] >= 'a' && string[c] <= 'z') ;
	#endif
	if (var9089487) {
      /** Printing only those characters 
          whose count is at least 1 */
	#ifdef SIZE == 1
		if (count[c] != 0)
	#endif
        printf("%c occurs %d times in the entered string.\n",c+'a',count[c]);
   
	}

 
   return 0;
}