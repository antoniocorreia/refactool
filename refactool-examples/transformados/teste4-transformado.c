#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;
	
	#ifdef SIZE == 1
		if (x == 1)
	#endif
	{
		x++; 
	}
	
	#ifdef SIZE == 1
		int test = (x == 1);
	#else
		int test = (x == 2);
	#endif
	if(test){
		x++; 
	}
	
	#ifdef SIZE == 1
		int test = (z == 1);
	#else
		int test = (z == 2);
	#endif
	if(test){
		z++; 
	}
}

