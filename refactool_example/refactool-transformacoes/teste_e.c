#include <stdio.h>
#define VAR 64

main()
{
	int x = 1;
	int y = 2;

	int var5880546 =  (x == 1);
	#ifdef  VAR == 1
		if(var5880546){

			//lines of code 1
		
		}
		var5880546 = !(var5880546);
	#else
		var5880546 = 1;
	#endif
	if(var5880546){

		//lines of code 2
	
	}


	#ifdef VAR == 1
		int var5880546 = (x == 1);
	#else
		int var5880546 = (x == 2);
	#endif
	if(var5880546){
		x++;
	}
	int z= 1;
	#ifdef VAR == 1
		int var5880546 = (z == 1);
	#else
		int var5880546 = (z == 2);
	#endif
	if(var5880546){
		z++;
	}

	return (0);
}

