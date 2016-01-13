#include <stdio.h>
#define VAR 64

main()
{
	int x = 1;
	int y = 2;
	
	
	
	if (x){
		//lines of code
	}
	
	int var0647592 = 1;
	#ifdef VAR == 1
		var0647592 =  (x == 1);
	#endif
	if (var0647592) {
		x++; 
	
	}

	
	#ifdef VAR == 1
		int var0647592 = (x == 1);
	#else
		int var0647592 = (x == 2);
	#endif
	if(var0647592){
		x++; 
	}
	
	
	#ifdef  VAR == 1
		#define ELEMS6476921 , 3
	#else
		#define ELEMS6476921 ""
	#endif
	int  id1[] = {
		1,
		2
		ELEMS6476921
	
	};
	
	#ifdef VAR ==1
		return x &&  y;
	#else
		return x &&  z;
	#endif
	
	
	#ifdef  VAR == 1
		#define ELEMS6476921 , 3
	#else
		#define ELEMS6476921 ""
	#endif
	int  id[] = {
		1,
		2
		ELEMS6476921
	
	};
}


