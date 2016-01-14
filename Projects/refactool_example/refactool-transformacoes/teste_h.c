#include <stdio.h>
#define VAR 64

main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	
	
	if (x){
		//lines of code
	}
	
	int var40a219badde94669be7d5ca850881aeb = 1;
	#ifdef VAR == 1
		var40a219badde94669be7d5ca850881aeb =  (x == 1);
	#endif
	if (var40a219badde94669be7d5ca850881aeb) {
		x++; 
	}
	
	#ifdef VAR == 1
		int varcd176ca21f1249a59c5556e0bc33880a = (x == 1);
	#else
		int varcd176ca21f1249a59c5556e0bc33880a = (x == 2);
	#endif
	if(varcd176ca21f1249a59c5556e0bc33880a){
		x++; 
	}
	
	#ifdef  VAR == 1
		#define ELEMSad888c934493482c8f812359e4e19792 , 3
	#else
		#define ELEMSad888c934493482c8f812359e4e19792 ""
	#endif
	int id1[] = {
		1,
		2
		ELEMSad888c934493482c8f812359e4e19792
	};
	
	#ifdef VAR ==1
		return x && y;
	#else
		return x && z;
	#endif
	
	#ifdef  VAR == 1
		#define ELEMS8cfc098b40574da2b7207e7c34e1b4f7 , 3
	#else
		#define ELEMS8cfc098b40574da2b7207e7c34e1b4f7 ""
	#endif
	int id[] = {
		1,
		2
		ELEMS8cfc098b40574da2b7207e7c34e1b4f7
	};
}


