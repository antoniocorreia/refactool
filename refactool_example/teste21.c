#include <stdio.h>
#define SIZE 64

//C program remove spaces, blanks from a string
 
int main()
{
	char text[1000], blank[1000];
	int c = 0, d = 0;
 
	printf("Enter some text\n");
	gets(text);
 
	while (text[c] != '\0') {
	#ifdef SIZE == 3
		if (text[c] == ' ') 
	#endif
		{
			int temp = c + 1;
			#ifdef SIZE == 1
				if (text[temp] != '\0')
			#endif
				{
					while (text[temp] == ' ' && text[temp] != '\0') {
				#ifdef SIZE == 2	
					if (text[temp] == ' ') 
				#endif
					{
						c++;
					}  
					temp++;
					}
				}
		}
			blank[d] = text[c];
			c++;
			d++;
	}
 
	blank[d] = '\0';
 
	printf("Text after removing blanks\n%s\n", blank);
 
	return 0;
}