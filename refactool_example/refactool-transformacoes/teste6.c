#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;
	
	int var1809854 = (x==4);
	#ifdef SIZE==5
		var1809854 = var1809854 && y==6;
	#endif
	if(var1809854){
		y = y + 1;
	}
	
	
	
	int var1809854 = (x==1);
	#ifdef SIZE==2
		var1809854 = var1809854 && y==3;
	#endif
	if(var1809854){
		x = x + 1;
	}
	
}

