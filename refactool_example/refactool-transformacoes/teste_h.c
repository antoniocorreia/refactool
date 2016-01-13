#include <stdio.h>
#define VAR 64

main()
{
	int x = 1;
	int y = 2;
	
	
	
	if (x){
		//lines of code
	}
	
	int var8456159 = 1;
	#ifdef VAR == 1
		var8456159 =  (x == 1);
	#endif
	if (var8456159) {
		x++; 
	
	}

	
	#ifdef VAR == 1
		int var8456159 = (x == 1);
	#else
		int var8456159 = (x == 2);
	#endif
	if(var8456159){
		x++; 
	}
	
	
	#ifdef  VAR == 1
		#define ELEMS8456159 , 3
	#else
		#define ELEMS8456159 ""
	#endif
	int  id1[] = {
		1,
		2
		ELEMS8456159
	
	};
	
	#ifdef VAR ==1
		return x &&  y;
	#else
		return x &&  z;
	#endif
	
	
	#ifdef  VAR == 1
		#define ELEMS8456159 , 3
	#else
		#define ELEMS8456159 ""
	#endif
	int  id[] = {
		1,
		2
		ELEMS8456159
	
	};
}


