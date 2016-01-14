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


	int var1272364061c144bc84dd86cac51fb957 = 1;
	#ifdef VAR == 1
		var1272364061c144bc84dd86cac51fb957 =  (x==1);
	#endif
	if (var1272364061c144bc84dd86cac51fb957) {
		//lines of code
	}

	return (0);
}
