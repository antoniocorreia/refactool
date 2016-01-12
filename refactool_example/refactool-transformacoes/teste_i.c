#include <stdio.h>
#define SIZE 64

#ifdef SIZE == 64
	
	#define PARAM2958432 int x

#else
	#define PARAM2958432 ""
#endif
void  function(PARAM2958432){
	
	//lines of code

}
;

#ifdef SIZE == 642
	
	#define PARAM2958432 int y

#else
	#define PARAM2958432 ""
#endif
void  function2(PARAM2958432){
	
	//lines of code 2

}
;

main()
{
	int x = 1;
	int y = 2;

	
	#ifdef  SIZE == 1
		#define ELEMS2958432 , 3
	#else
		#define ELEMS2958432 ""
	#endif
	int  id[] = {
		1,
		2
		ELEMS2958432
	
	};

	#ifdef SIZE == 64
		
	#define PARAM2958432 int var2958432 = (x == 1);
	#else
		int var2958432 = (x == 2);
	
#else
	#define PARAM2958432 ""
#endif
int  var9568709 = 1;
	#ifdef SIZE == 1
		var9568709 =  (PARAM2958432){
	
		x++;
	
}


	int var2958432 = (x==4);
	#ifdef SIZE==5
		var2958432 = var2958432 && y==6;
	#endif
	if(var2958432){
		y = y + 1;
	}
}


