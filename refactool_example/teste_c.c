#include <stdio.h>
#define VAR 64

main()
{
	int  Grade = 'B';
	switch( Grade )
	{
	#ifdef VAR == 64
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

    return (0);
}
