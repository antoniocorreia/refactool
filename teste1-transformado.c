#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;
	
	int test =  (x == 1);
	if (test){

		//lines of code 1
	
	}
	#ifdef SIZE == 1		
		 if(!(test) &&  (x == 2)){

			//lines of code 2
		
		}
	#endif
	
	
	#ifdef SIZE == 1
		if (x==1)
	#endif
	{
		//lines of code
	}
	
	
}