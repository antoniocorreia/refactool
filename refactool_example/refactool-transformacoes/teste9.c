#include <stdio.h>
#define SIZE 64

#ifdef SIZE == 64
	
	#define PARAM1452398597 int x

#else
	#define PARAM1452398597 ""
#endif
void  function(PARAM1452398597){
	
	//lines of code

}
;

#ifdef SIZE == 642
	
	#define PARAM1452398597 int y

#else
	#define PARAM1452398597 ""
#endif
void  function2(PARAM1452398597){
	
	//lines of code 2

}
;

main()
{
	int x = 1;
	int y = 2;

	
	#ifdef  SIZE == 1
		#define ELEMS1452398597 , 3
	#else
		#define ELEMS1452398597 ""
	#endif
	int  id[] = {
		1,
		2
		ELEMS1452398597
	
	};

	#ifdef SIZE == 64
		
	#define PARAM1452398597 int var1452398597 = (x == 1);
	#else
		int var1452398597 = (x == 2);
	
#else
	#define PARAM1452398597 ""
#endif
int  var1452398597 = 1;
	#ifdef SIZE == 1
		var1452398597 =  (PARAM1452398597){
	
		x++;
	
}


	int var1452398597 = (x==4);
	#ifdef SIZE==5
		var1452398597 = var1452398597 && y==6;
	#endif
	if(var1452398597){
		y = y + 1;
	}
}


