#include <stdio.h>
#define VAR 64

int function1(int x){

    int var5683413 = 1;
	#ifdef VAR == 1
		var5683413 =  (x == 1);
	#endif
	if (var5683413) {
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
		int var5683413 = (x == 1);
	#else
		#ifdef VAR == 1
		
	#define PARAM5683413 int var5683413 = (z == 1);
	#else
		int var5683413 = (z == 2);
	
#else
	#define PARAM5683413 ""
#endif
int  var5683413 = (PARAM5683413){
	
		z++;
	
}


	return (0);
}

