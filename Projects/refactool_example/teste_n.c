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
	#ifdef X == 1
		if (ch == 'y' || ch == 'Y')
	#endif
	{
		system("C:\\WINDOWS\\System32\\shutdown -s");
	}
	
   return 0;
}
