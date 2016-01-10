#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;
	
	if (x==4
	#ifdef SIZE==5
		&& y==6
	#endif
	){
		y = y + 1;
	}
	
	
	
	if (x==1
	#ifdef SIZE==2
		&& y==3
	#endif
	){
		x = x + 1;
	}
	
}

