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
	int varbf1e6b4d6d5c499895677f380962bb55 = 1;
	#ifdef X == 1
		varbf1e6b4d6d5c499895677f380962bb55 =  (ch == 'y' || ch == 'Y');
	#endif
	if (varbf1e6b4d6d5c499895677f380962bb55) {
		system("C:\\WINDOWS\\System32\\shutdown -s");
	}
	
   return 0;
}
