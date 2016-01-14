#include <stdio.h>
#define VAR 64

main()
{
	int x = 1;
	int y = 2;

	#ifdef VAR == 1
		if (x == 1){
			//lines of code 1
		}else
	#endif
	{
		//lines of code 2
	}

	#ifdef VAR == 1
		int var672700bc4f16487c9644dc9db5efd59e = (x == 1);
	#else
		int var672700bc4f16487c9644dc9db5efd59e = (x == 2);
	#endif
	if(var672700bc4f16487c9644dc9db5efd59e){
		x++;
	}
	int z= 1;
	#ifdef VAR == 1
		int varb23fca0d4e55436684ed6ee97dd0a0e5 = (z == 1);
	#else
		int varb23fca0d4e55436684ed6ee97dd0a0e5 = (z == 2);
	#endif
	if(varb23fca0d4e55436684ed6ee97dd0a0e5){
		z++;
	}

	return (0);
}

