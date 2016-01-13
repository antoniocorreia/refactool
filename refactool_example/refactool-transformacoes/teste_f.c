#include <stdio.h>
#define VAR 64

main()
{
	int x = 1;
	int y = 2;

	int var4117997 = (x==4);
	#ifdef VAR==5
		var4117997 = var4117997 && y==6;
	#endif
	if(var4117997){
		y = y + 1;
	}



	int var4117997 = (x==1);
	#ifdef VAR==2
		var4117997 = var4117997 && y==3;
	#endif
	if(var4117997){
		x = x + 1;
	}

	return (0);
}

