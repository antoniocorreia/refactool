#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;
	
	
	
	if (x){
		//lines of code
	}
	
	int var9256175 = 1;
	#ifdef SIZE == 1
		var9256175 =  (x == 1);
	#endif
	if (var9256175) {
		x++; 
	
	}

	
	#ifdef SIZE == 1
		int var9256175 = (x == 1);
	#else
		int var9256175 = (x == 2);
	#endif
	if(var9256175){
		x++; 
	}
	
	
	#ifdef  SIZE == 1
		#define ELEMS9256175 , 3
	#else
		#define ELEMS9256175 ""
	#endif
	int  id1[] = {
		1,
		2
		ELEMS9256175
	
	};
	
	#ifdef SIZE ==1
		return x &&  y;
	#else
		return x &&  z;
	#endif
	
	
	#ifdef  SIZE == 1
		#define ELEMS9256175 , 3
	#else
		#define ELEMS9256175 ""
	#endif
	int  id[] = {
		1,
		2
		ELEMS9256175
	
	};
}


