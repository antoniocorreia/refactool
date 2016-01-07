#include <stdio.h>
#define SIZE 64

main()
{	
	int  Grade = 'B';
	switch( Grade )
	{
	#ifdef SIZE == 64
		case 'A' : 
			printf( "Excellent\n" );
			break;
	#endif
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
