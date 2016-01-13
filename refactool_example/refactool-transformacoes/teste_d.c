#include <stdio.h>
#define VAR 64

int function1(int x){

    int var3782142 = 1;
	#ifdef VAR == 1
		var3782142 =  (x == 1);
	#endif
	if (var3782142) {
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
		int var3782142 = (x == 1);
	#else
		#ifdef VAR == 1
		
	#define PARAM3782142 int var3782142 = (z == 1);
	#else
		int var3782142 = (z == 2);
	
#else
	#define PARAM3782142 ""
#endif
int  var3782142 = (PARAM3782142){
	
		z++;
	
}


	return (0);
}

