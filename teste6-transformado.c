#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;
	
	bool test =  (x==4);
	#ifdef SIZE==5
		test = test && y==6;
	#endif
	if(test){
		y = y + 1;
	}
	
	
	
	bool test =  (x==1);
	#ifdef SIZE==2
		test = test && y==3;
	#endif
	if(test){
		x = x + 1;
	}
	
}

