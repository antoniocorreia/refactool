#include <stdio.h>
#define VAR 64

main()
{	
	int  Grade = 'B';
	#ifdef VAR == 64
		#define VAR8662399 case 'A' : 
			printf( "Excellent\n" );
			break;
	
	#else
		#define VAR8662399 ""
	#endif
	switch (Grade){
		VAR8662399

		case 'B' :
			printf( "Good\n" );
			break;
		case 'C' :
			printf( "OK\n" );
			break;
		default :
			printf( "What is your grade anyway?\n" );
			break;
    }
}
