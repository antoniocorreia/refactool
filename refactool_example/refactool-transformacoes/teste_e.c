#include <stdio.h>
#define VAR 64

main()
{
	int x = 1;
	int y = 2;

	int var3978953 =  (x == 1);
	#ifdef  VAR == 1
		if(var3978953){

			//lines of code 1
		
		}
		var3978953 = !(var3978953);
	#else
		var3978953 = 1;
	#endif
	if(var3978953){

		//lines of code 2
	
	}


	#ifdef VAR == 1
		int var3978953 = (x == 1);
	#else
		int var3978953 = (x == 2);
	#endif
	if(var3978953){
		x++;
	}
	int z= 1;
	#ifdef VAR == 1
		int var3978953 = (z == 1);
	#else
		int var3978953 = (z == 2);
	#endif
	if(var3978953){
		z++;
	}

	return (0);
}

