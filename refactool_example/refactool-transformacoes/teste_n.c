#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	char ch;
	int x = 1;
	int y = 2;
 
	printf("Do you want to shutdown your computer now (y/n)\n");
	scanf("%c", &ch);
	int var9349495 = 1;
	#ifdef x == 1
		var9349495 =  (ch == 'y' || ch == 'Y');
	#endif
	if (var9349495) {
		system("C:\\WINDOWS\\System32\\shutdown -s");
	
	}

	
   return 0;
}