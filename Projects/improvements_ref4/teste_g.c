#include <stdio.h>
#define VAR 1

main()
{
	int x = 1;
	int y = 0;
	int z = 1;
	
	#ifdef VAR == 1
		if (x == 0)
	#endif
	{
		x++; 
	}
	
									#ifdef VAR == 1
										if (x == 0){
									#else
										if (x == 2){
									#endif
										x++; 
									}
	
	return x
	#ifdef VAR == 1
		&& y
	#else
		&& z
	#endif
	;
}

