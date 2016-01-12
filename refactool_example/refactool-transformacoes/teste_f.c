#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;
	
	int var8896787 = (x==4);
	#ifdef SIZE==5
		var8896787 = var8896787 && y==6;
	#endif
	if(var8896787){
		y = y + 1;
	}
	
	
	
	int var8896787 = (x==1);
	#ifdef SIZE==2
		var8896787 = var8896787 && y==3;
	#endif
	if(var8896787){
		x = x + 1;
	}
	
}

