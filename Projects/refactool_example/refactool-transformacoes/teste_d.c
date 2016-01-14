#include <stdio.h>
#define VAR 64

int function1(int x){

    int varf4db0536503c4e9f92ca3fa93c63cefa = 1;
	#ifdef VAR == 1
		varf4db0536503c4e9f92ca3fa93c63cefa =  (x == 1);
	#endif
	if (varf4db0536503c4e9f92ca3fa93c63cefa) {
		x++;
	}

    return x;
}

main()
{
	int x = 1;
	int y = 2;
    int z = 3;

	x = function1(x);

	#ifdef VAR == 1
		int varc9abdaa294f64ac4abe440caaec54412 = (x == 1);
	#else
		int varc9abdaa294f64ac4abe440caaec54412 = (x == 2);
	#endif
	if(varc9abdaa294f64ac4abe440caaec54412){
		x++;
	}

	#ifdef VAR == 1
		int varde00fc24f3a34885a807f8bdcf95c544 = (z == 1);
	#else
		int varde00fc24f3a34885a807f8bdcf95c544 = (z == 2);
	#endif
	if(varde00fc24f3a34885a807f8bdcf95c544){
		z++;
	}

	return (0);
}

