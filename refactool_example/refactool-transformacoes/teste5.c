#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;

	int var1736805 =  (x == 1);
	#ifdef  SIZE == 1
		if(var1736805){

			//lines of code 1
		
		}
		var1736805 = !(var1736805);
	#else
		var1736805 = 1;
	#endif
	if(var1736805){

		//lines of code 2
	
	}


	#ifdef SIZE == 1
		int var1736805 = (x == 1);
	#else
		int var1736805 = (x == 2);
	#endif
	if(var1736805){
		x++;
	}
	int z= 1;
	#ifdef SIZE == 1
		int var1736805 = (z == 1);
	#else
		int var1736805 = (z == 2);
	#endif
	if(var1736805){
		z++;
	}
}

