#include <stdio.h>
#define VAR 64

main()
{
	int x = 1;
	int y = 2;
	
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
	
	return x
	#ifdef VAR ==1
		&& y
	#else
		&& z
	#endif
	;
}

