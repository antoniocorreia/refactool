#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;
	
	
	
	if (x){
		//lines of code
	}
	
	int var2312552 = 1;
	#ifdef SIZE == 1
		var2312552 =  (x == 1);
	#endif
	if (var2312552) {
		x++; 
	
	}

	
	#ifdef SIZE == 1
		int var2312552 = (x == 1);
	#else
		int var2312552 = (x == 2);
	#endif
	if(var2312552){
		x++; 
	}
	
	
	#ifdef  SIZE == 1
		#define ELEMS2312552 , 3
	#else
		#define ELEMS2312552 ""
	#endif
	int  id1[] = {
		1,
		2
		ELEMS2312552
	
	};
	
	#ifdef SIZE ==1
		return x &&  y;
	#else
		return x &&  z;
	#endif
	
	
	#ifdef  SIZE == 1
		#define ELEMS2312552 , 3
	#else
		#define ELEMS2312552 ""
	#endif
	int  id[] = {
		1,
		2
		ELEMS2312552
	
	};
}


