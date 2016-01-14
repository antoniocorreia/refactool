#include <stdio.h>
#define VAR 64

int function1(int x){

    #ifdef VAR == 1
		if (x == 1)
	#endif
	{
		x++;
	}

    return x;
}

main()
{
	int x = 1;
	int y = 2;
    int z = 3;

	x = function1(x);

	#ifdef VAR == 1
		if (x == 1){
	#else
		if (x == 2){
	#endif
		x++;
	}

	#ifdef VAR == 1
		if (z == 1){
	#else
		if (z == 2){
	#endif
		z++;
	}

	return (0);
}

