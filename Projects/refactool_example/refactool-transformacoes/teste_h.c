#include <stdio.h>
#define VAR 64

main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	
	
	if (x){
		//lines of code
	}
	
	#ifdef VAR == 1
		if (x == 1)
	#endif
	{
		x++; 
	}
	
	#ifdef VAR == 1
		if (x == 1){
	#else
		if (x == 2){
	#endif
		x++; 
	}
	
	int id1[] = {1,
		2
	#ifdef VAR == 1
		,3
	#endif
	};
	
	#ifdef VAR ==1
		return x && y;
	#else
		return x && z;
	#endif
	
	int id[] = {1,
		2
	#ifdef VAR == 1
		,3
	#endif
	};
}


