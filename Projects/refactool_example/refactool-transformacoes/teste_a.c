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


	int varc92e41c68b33474b80b03fce75024646 = 1;
	#ifdef VAR == 1
		varc92e41c68b33474b80b03fce75024646 =  (x==1);
	#endif
	if (varc92e41c68b33474b80b03fce75024646) {
		//lines of code
	}

	return (0);
}
