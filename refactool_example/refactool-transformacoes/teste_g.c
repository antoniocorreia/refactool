#include <stdio.h>
#define VAR 64

main()
{
	int x = 1;
	int y = 2;
	
	int var6199552 = 1;
	#ifdef VAR == 1
		var6199552 =  (x == 1);
	#endif
	if (var6199552) {
		x++; 
	
	}

	
	#ifdef VAR == 1
		int var6200556 = (x == 1);
	#else
		int var6200556 = (x == 2);
	#endif
	if(var6200556){
		x++; 
	}
	
	#ifdef VAR ==1
		return x &&  y;
	#else
		return x &&  z;
	#endif
}

