#include <stdio.h>
#define SIZE 64

main()
{	
	int  Grade = 'B';
	#ifdef SIZE == 64
		#define CASE1 case 'A' : 
			printf( "Excellent\n" );
			break;
	
	#else
		#define CASE1 ""
	#endif
	switch (Grade){
		CASE1
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
