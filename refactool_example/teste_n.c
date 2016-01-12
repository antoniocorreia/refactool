#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	char ch;
	int x = 1;
	int y = 2;
 
	printf("Do you want to shutdown your computer now (y/n)\n");
	scanf("%c", &ch);
	#ifdef x == 1
		if (ch == 'y' || ch == 'Y')
	#endif
	{
		system("C:\\WINDOWS\\System32\\shutdown -s");
	}
	
   return 0;
}