#include <stdio.h>
#define VAR 1

main()
{
	int x = 1;
	int y = 0;
	int z = 1;
	
	int var5dc912318b3043e2a8ebe2e81d31c8ca = 1;
	#ifdef VAR == 1
		var5dc912318b3043e2a8ebe2e81d31c8ca =  (x == 0);
	#endif
	if (var5dc912318b3043e2a8ebe2e81d31c8ca) {
		x++; 
	}
	
	#ifdef VAR == 1
		int var95cb6c0f809640dda358a2f0c98da505 = (x == 0);
	#else
		int var95cb6c0f809640dda358a2f0c98da505 = (x == 2);
	#endif
	if(var95cb6c0f809640dda358a2f0c98da505){
		x++; 
	}
	
	#ifdef VAR == 1
		return x && y;
	#else
		return x && z;
	#endif
}

