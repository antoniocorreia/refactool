#include <stdio.h>
#define VAR 2

main()
{
	int x = 1;
	int y = 2;


	if (x==1){


		//lines of code 1


	}
	#ifdef VAR == 1
		 else if(x == 2){


			//lines of code 2


		}
	#endif


	#ifdef VAR == 1
		if (x==1)
	#endif
	{
		//lines of code
	}

	return (0);
}
