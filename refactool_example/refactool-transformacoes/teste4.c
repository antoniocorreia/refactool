#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;

	int var1571696 = 1;
	#ifdef SIZE == 1
		var1571696 =  (x == 1);
	#endif
	if (var1571696) {
		x++;
	
	}


	#ifdef SIZE == 1
		int var1571696 = (x == 1);
	#else
		int var1571696 = (x == 2);
	#endif
	if(var1571696){
		x++;
	}
	int z;
	#ifdef SIZE == 1
		int var1571696 = (z == 1);
	#else
		int var1571696 = (z == 2);
	#endif
	if(var1571696){
		z++;
	}
}

