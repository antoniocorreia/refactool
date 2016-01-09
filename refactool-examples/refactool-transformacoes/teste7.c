#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;
	
	int var1452322738 = 1;
	#ifdef SIZE == 1
		var1452322738 =  (x == 1);
	#endif
	if (var1452322738) {
		x++; 
	
	}

	
	#ifdef SIZE == 1
		if (x == 1){
	#else
		if (x == 2){
	#endif
		x++; 
	}
	
	return x
	#ifdef SIZE ==1
		&& y
	#else
		&& z
	#endif
	;
}

