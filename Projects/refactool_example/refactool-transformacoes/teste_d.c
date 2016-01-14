#include <stdio.h>
#define VAR 64

int function1(int x){

    int var15f6a80f3bd144beace581510c537f7f = 1;
	#ifdef VAR == 1
		var15f6a80f3bd144beace581510c537f7f =  (x == 1);
	#endif
	if (var15f6a80f3bd144beace581510c537f7f) {
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
		int vare210a94c58874d86984a242bdc40fce3 = (x == 1);
	#else
		int vare210a94c58874d86984a242bdc40fce3 = (x == 2);
	#endif
	if(vare210a94c58874d86984a242bdc40fce3){
		x++;
	}

	#ifdef VAR == 1
		int var0c88363019a143cf871a543154bb9763 = (z == 1);
	#else
		int var0c88363019a143cf871a543154bb9763 = (z == 2);
	#endif
	if(var0c88363019a143cf871a543154bb9763){
		z++;
	}

	return (0);
}

