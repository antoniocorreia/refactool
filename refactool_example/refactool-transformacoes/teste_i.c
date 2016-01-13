#include <stdio.h>
#define VAR 64

#ifdef VAR == 64
	
	#define PARAM6784554 int x

#else
	#define PARAM6784554 ""
#endif
void  function(PARAM6784554){
	
	//lines of code

}
;

#ifdef VAR == 642
	
	#define PARAM6784554 int y

#else
	#define PARAM6784554 ""
#endif
void  function2(PARAM6784554){
	
	//lines of code 2

}
;

main()
{
	int x = 1;
	int y = 2;

	
	#ifdef  VAR == 1
		#define ELEMS6780551 , 3
	#else
		#define ELEMS6780551 ""
	#endif
	int  id[] = {
		1,
		2
		ELEMS6780551
	
	};

	#ifdef VAR == 64
		
	#define PARAM6784554 int var6779552 = (x == 1);
	#else
		int var6779552 = (x == 2);
	
#else
	#define PARAM6784554 ""
#endif
int  var6778547 = 1;
	#ifdef VAR == 1
		var6778547 =  (PARAM6784554){
	
		x++;
	
}


	int var6779552 = (x==4);
	#ifdef VAR==5
		var6779552 = var6779552 && y==6;
	#endif
	if(var6779552){
		y = y + 1;
	}
}


