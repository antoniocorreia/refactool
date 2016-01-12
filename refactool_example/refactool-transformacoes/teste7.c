#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;
	
	int var1278358 = 1;
	#ifdef SIZE == 1
		var1278358 =  (x == 1);
	#endif
	if (var1278358) {
		x++; 
	
	}

	
	#ifdef SIZE == 1
		if (x == 1){
	#else
		if (x == 2){
	#endif
		x++; 
	}
	
	return x
	#ifdef SIZE ==1
		&& y
	#else
		&& z
	#endif
	;
}

