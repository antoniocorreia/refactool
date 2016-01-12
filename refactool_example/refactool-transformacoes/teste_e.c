#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;

	int var8865534 =  (x == 1);
	#ifdef  SIZE == 1
		if(var8865534){

			//lines of code 1
		
		}
		var8865534 = !(var8865534);
	#else
		var8865534 = 1;
	#endif
	if(var8865534){

		//lines of code 2
	
	}


	#ifdef SIZE == 1
		int var8865534 = (x == 1);
	#else
		int var8865534 = (x == 2);
	#endif
	if(var8865534){
		x++;
	}
	int z= 1;
	#ifdef SIZE == 1
		int var8865534 = (z == 1);
	#else
		int var8865534 = (z == 2);
	#endif
	if(var8865534){
		z++;
	}
}

