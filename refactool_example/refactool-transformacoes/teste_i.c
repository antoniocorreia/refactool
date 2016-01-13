#include <stdio.h>
#define VAR 64

#ifdef VAR == 64
	
	#define PARAM4814762 int x

#else
	#define PARAM4814762 ""
#endif
void  function(PARAM4814762){
	
	//lines of code

}
;

#ifdef VAR == 642
	
	#define PARAM4814762 int y

#else
	#define PARAM4814762 ""
#endif
void  function2(PARAM4814762){
	
	//lines of code 2

}
;

main()
{
	int x = 1;
	int y = 2;

	
	#ifdef  VAR == 1
		#define ELEMS8481176 , 3
	#else
		#define ELEMS8481176 ""
	#endif
	int  id[] = {
		1,
		2
		ELEMS8481176
	
	};

	#ifdef VAR == 64
		
	#define PARAM4814762 int var8481176 = (x == 1);
	#else
		int var8481176 = (x == 2);
	
#else
	#define PARAM4814762 ""
#endif
int  var4810759 = 1;
	#ifdef VAR == 1
		var4810759 =  (PARAM4814762){
	
		x++;
	
}


	int var8481176 = (x==4);
	#ifdef VAR==5
		var8481176 = var8481176 && y==6;
	#endif
	if(var8481176){
		y = y + 1;
	}
}


