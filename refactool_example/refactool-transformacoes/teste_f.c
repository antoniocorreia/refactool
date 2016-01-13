#include <stdio.h>
#define VAR 64

main()
{
	int x = 1;
	int y = 2;

	int var6028691 = (x==4);
	#ifdef VAR==5
		var6028691 = var6028691 && y==6;
	#endif
	if(var6028691){
		y = y + 1;
	}



	int var6028691 = (x==1);
	#ifdef VAR==2
		var6028691 = var6028691 && y==3;
	#endif
	if(var6028691){
		x = x + 1;
	}

	return (0);
}

