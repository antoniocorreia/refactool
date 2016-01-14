#include <stdio.h>
#define VAR 64

main()
{
	int x = 1;
	int y = 2;

	int var32e9e483cdfe41caa239c27562eed812 =  (x == 1);
	#ifdef VAR == 1
		if(var32e9e483cdfe41caa239c27562eed812){
			//lines of code 1
		}
		var32e9e483cdfe41caa239c27562eed812 = !(var32e9e483cdfe41caa239c27562eed812);
	#else
		var32e9e483cdfe41caa239c27562eed812 = 1;
	#endif
	if(var32e9e483cdfe41caa239c27562eed812){
		//lines of code 2
	}

	#ifdef VAR == 1
		int var0b85cae5ed6645f6a558171bbb0774bf = (x == 1);
	#else
		int var0b85cae5ed6645f6a558171bbb0774bf = (x == 2);
	#endif
	if(var0b85cae5ed6645f6a558171bbb0774bf){
		x++;
	}
	int z= 1;
	#ifdef VAR == 1
		int var08fa74511d0c40eb99499325dc43b98f = (z == 1);
	#else
		int var08fa74511d0c40eb99499325dc43b98f = (z == 2);
	#endif
	if(var08fa74511d0c40eb99499325dc43b98f){
		z++;
	}

	return (0);
}

