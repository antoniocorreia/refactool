#include <stdio.h>
#define VAR 64

main()
{
	int x = 1;
	int y = 2;

	int var4a1c754bc8a44987b639f8b2843326d1 =  (x == 1);
	#ifdef VAR == 1
		if(var4a1c754bc8a44987b639f8b2843326d1){
			//lines of code 1
		}
		var4a1c754bc8a44987b639f8b2843326d1 = !(var4a1c754bc8a44987b639f8b2843326d1);
	#else
		var4a1c754bc8a44987b639f8b2843326d1 = 1;
	#endif
	if(var4a1c754bc8a44987b639f8b2843326d1){
		//lines of code 2
	}

	#ifdef VAR == 1
		int vara56dc1257965448999acc0abab051d19 = (x == 1);
	#else
		int vara56dc1257965448999acc0abab051d19 = (x == 2);
	#endif
	if(vara56dc1257965448999acc0abab051d19){
		x++;
	}
	int z= 1;
	#ifdef VAR == 1
		int var92dd3685b3a84f09949df0459517d02a = (z == 1);
	#else
		int var92dd3685b3a84f09949df0459517d02a = (z == 2);
	#endif
	if(var92dd3685b3a84f09949df0459517d02a){
		z++;
	}

	return (0);
}

