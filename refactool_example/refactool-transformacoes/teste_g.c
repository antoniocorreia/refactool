#include <stdio.h>
#define VAR 64

main()
{
	int x = 1;
	int y = 2;
	
	int var4264248 = 1;
	#ifdef VAR == 1
		var4264248 =  (x == 1);
	#endif
	if (var4264248) {
		x++; 
	
	}

	
	#ifdef VAR == 1
		int var4264248 = (x == 1);
	#else
		int var4264248 = (x == 2);
	#endif
	if(var4264248){
		x++; 
	}
	
	#ifdef VAR ==1
		return x &&  y;
	#else
		return x &&  z;
	#endif
}

