#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;
	
	int var1918922 = 1;
	#ifdef SIZE == 1
		var1918922 =  (x == 1);
	#endif
	if (var1918922) {
		x++; 
	
	}

	
	#ifdef SIZE == 1
		int var1918922 = (x == 1);
	#else
		int var1918922 = (x == 2);
	#endif
	if(var1918922){
		x++; 
	}
	
	#ifdef SIZE ==1
		return x &&  y;
	#else
		return x &&  z;
	#endif
}

