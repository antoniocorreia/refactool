#include <stdio.h>
#define VAR 1

main()
{
	int x = 1;
	int y = 0;
	int z = 1;
	
	int varb4c74e5b13504b0aa14c474f2b18d50c = 1;
	#ifdef VAR == 1
		varb4c74e5b13504b0aa14c474f2b18d50c =  (x == 0);
	#endif
	if (varb4c74e5b13504b0aa14c474f2b18d50c) {
		x++; 
	}
	
	#ifdef VAR == 1
		int var3a1038bcffb848408d20b1fae95e501f = (x == 0);
	#else
		int var3a1038bcffb848408d20b1fae95e501f = (x == 2);
	#endif
	if(var3a1038bcffb848408d20b1fae95e501f){
		x++; 
	}
	
	#ifdef VAR == 1
		return x && y;
	#else
		return x && z;
	#endif
}

