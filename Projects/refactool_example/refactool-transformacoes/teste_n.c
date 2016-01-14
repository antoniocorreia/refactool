#include <stdio.h>
#include <stdlib.h>

#define X 1
 
int main()
{
	char ch;
	int x = 1;
	int y = 2;
 
	printf("Do you want to shutdown your computer now (y/n)\n");
	scanf("%c", &ch);
	int varb7b5e6040a9749b38ffb2d28885e34b9 = 1;
	#ifdef X == 1
		varb7b5e6040a9749b38ffb2d28885e34b9 =  (ch == 'y' || ch == 'Y');
	#endif
	if (varb7b5e6040a9749b38ffb2d28885e34b9) {
		system("C:\\WINDOWS\\System32\\shutdown -s");
	}
	
   return 0;
}
