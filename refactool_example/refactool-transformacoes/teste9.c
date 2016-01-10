#include <stdio.h>
#define SIZE 64

#ifdef SIZE == 64
	
	#define PARAM2647774 int x

#else
	#define PARAM2647774 ""
#endif
void  function(PARAM2647774){
	
	//lines of code

}
;

#ifdef SIZE == 642
	
	#define PARAM2647774 int y

#else
	#define PARAM2647774 ""
#endif
void  function2(PARAM2647774){
	
	//lines of code 2

}
;

main()
{
	int x = 1;
	int y = 2;

	
	#ifdef  SIZE == 1
		#define ELEMS2643771 , 3
	#else
		#define ELEMS2643771 ""
	#endif
	int  id[] = {
		1,
		2
		ELEMS2643771
	
	};

	#ifdef SIZE == 64
		
	#define PARAM2647774 int var2643771 = (x == 1);
	#else
		int var2643771 = (x == 2);
	
#else
	#define PARAM2647774 ""
#endif
int  var6264277 = 1;
	#ifdef SIZE == 1
		var6264277 =  (PARAM2647774){
	
		x++;
	
}


	int var2643771 = (x==4);
	#ifdef SIZE==5
		var2643771 = var2643771 && y==6;
	#endif
	if(var2643771){
		y = y + 1;
	}
}


