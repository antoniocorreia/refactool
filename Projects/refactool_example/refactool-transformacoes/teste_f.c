#include <stdio.h>
#define VAR 64

main()
{
	int x = 1;
	int y = 2;

	int varb96339d1834c4688bbb7b1d3fa770154 = (x==4);
	#ifdef VAR==5
		varb96339d1834c4688bbb7b1d3fa770154 = varb96339d1834c4688bbb7b1d3fa770154 && y==6;
	#endif
	if(varb96339d1834c4688bbb7b1d3fa770154){
		y = y + 1;
	}



	int var78f02b9ebe554cf9ad322d8da47baa6c = (x==1);
	#ifdef VAR==2
		var78f02b9ebe554cf9ad322d8da47baa6c = var78f02b9ebe554cf9ad322d8da47baa6c && y==3;
	#endif
	if(var78f02b9ebe554cf9ad322d8da47baa6c){
		x = x + 1;
	}

	return (0);
}

