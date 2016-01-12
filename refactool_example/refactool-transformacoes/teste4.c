#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;

	int var0758452 = 1;
	#ifdef SIZE == 1
		var0758452 =  (x == 1);
	#endif
	if (var0758452) {
		x++;
	
	}


	#ifdef SIZE == 1
		if (x == 1){
	#else
		if (x == 2){
	#endif
		x++;
	}
	int z;
	#ifdef SIZE == 1
		if (z == 1){
	#else
		if (z == 2){
	#endif
		z++;
	}
}

