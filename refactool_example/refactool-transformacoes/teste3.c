#include <stdio.h>
#define SIZE 64

main()
{	
	int  Grade = 'B';
	#ifdef SIZE == 64
		#define VAR1452398596 case 'A' : 
			printf( "Excellent\n" );
			break;
	
	#else
		#define VAR1452398596 ""
	#endif
	switch (Grade){
		VAR1452398596

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
