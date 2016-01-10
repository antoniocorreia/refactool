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

