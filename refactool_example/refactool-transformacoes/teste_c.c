#include <stdio.h>
#define VAR 64

main()
{
	int  Grade = 'B';
	#ifdef VAR == 64
		#define VAR5517302 case 'A' :    printf( "Excellent\n" );    break;  
	#else
		#define VAR5517302 ""
	#endif
	switch (Grade){
		VAR5517302

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
