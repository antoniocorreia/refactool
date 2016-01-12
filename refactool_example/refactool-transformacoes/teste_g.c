#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;
	
	int var8974915 = 1;
	#ifdef SIZE == 1
		var8974915 =  (x == 1);
	#endif
	if (var8974915) {
		x++; 
	
	}

	
	#ifdef SIZE == 1
		int var8974915 = (x == 1);
	#else
		int var8974915 = (x == 2);
	#endif
	if(var8974915){
		x++; 
	}
	
	#ifdef SIZE ==1
		return x &&  y;
	#else
		return x &&  z;
	#endif
}

