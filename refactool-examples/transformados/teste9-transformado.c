#include <stdio.h>
#define SIZE 64

#ifdef SIZE == 64
	
	#define PARAM int x

#else
	#define PARAM ""
#endif
void  function(PARAM){
	
	//lines of code

}
;

#ifdef SIZE == 642
	
	#define PARAM int y

#else
	#define PARAM ""
#endif
void  function2(PARAM){
	
	//lines of code 2

}
;

main()
{
	int x = 1;
	int y = 2;

	int id[] = {1,
		2
	#ifdef SIZE == 1
		,3
	#endif
	};

	#ifdef SIZE == 1
		if (x == 1)
	#endif
	{
		x++;
	};

	#ifdef SIZE == 64
		if (x == 1){
	#else
		if (x == 2){
	#endif
		x++;
	}

	if (x==4
	#ifdef SIZE==5
		&& y==6
	#endif
	){
		y = y + 1;
	}
}


