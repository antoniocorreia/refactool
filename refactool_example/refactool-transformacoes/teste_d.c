#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;

	int var8756154 = 1;
	#ifdef SIZE == 1
		var8756154 =  (x == 1);
	#endif
	if (var8756154) {
		x++;
	
	}


	#ifdef SIZE == 1
		int var8756154 = (x == 1);
	#else
		int var8756154 = (x == 2);
	#endif
	if(var8756154){
		x++;
	}
	int z;
	#ifdef SIZE == 1
		int var8756154 = (z == 1);
	#else
		int var8756154 = (z == 2);
	#endif
	if(var8756154){
		z++;
	}
}

