#include <stdio.h>
#define SIZE 64

void function(
#ifdef SIZE == 64
	int x
#endif
){
	//lines of code
};

void function2(
#ifdef SIZE == 642
	int y
#endif
){
	//lines of code 2
};

main()
{
	int x = 1;
	int y = 2;

	int id[] = {1,
		2
	#ifdef SIZE == 1
		,3
	#endif
	};

	int var7291961 = 1;
	#ifdef SIZE == 1
		var7291961 =  (x == 1);
	#endif
	if (var7291961) {
		x++;
	
	}
;

	#ifdef SIZE == 64
		if (x == 1){
	#else
		if (x == 2){
	#endif
		x++;
	}

	if (x==4
	#ifdef SIZE==5
		&& y==6
	#endif
	){
		y = y + 1;
	}
}


