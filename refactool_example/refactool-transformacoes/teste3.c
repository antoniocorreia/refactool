#include <stdio.h>
#define SIZE 64

main()
{	
	int  Grade = 'B';
	#ifdef SIZE == 64
		#define VAR0476846 case 'A' : 
			printf( "Excellent\n" );
			break;
	
	#else
		#define VAR0476846 ""
	#endif
	switch (Grade){
		VAR0476846

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
