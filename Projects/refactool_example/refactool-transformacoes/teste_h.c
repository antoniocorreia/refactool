#include <stdio.h>
#define VAR 64

main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	
	
	if (x){
		//lines of code
	}
	
	int vardf1749bbc4a145a5a132ba2090488893 = 1;
	#ifdef VAR == 1
		vardf1749bbc4a145a5a132ba2090488893 =  (x == 1);
	#endif
	if (vardf1749bbc4a145a5a132ba2090488893) {
		x++; 
	}
	
	#ifdef VAR == 1
		int var2f39bb4a7b3443a39407bac29d5b7641 = (x == 1);
	#else
		int var2f39bb4a7b3443a39407bac29d5b7641 = (x == 2);
	#endif
	if(var2f39bb4a7b3443a39407bac29d5b7641){
		x++; 
	}
	
	#ifdef  VAR == 1
		#define ELEMSf5e21a02b9734dbe9dc8ae4b965a89de , 3
	#else
		#define ELEMSf5e21a02b9734dbe9dc8ae4b965a89de ""
	#endif
	int id1[] = {
		1,
		2
		ELEMSf5e21a02b9734dbe9dc8ae4b965a89de
	};
	
	#ifdef VAR ==1
		return x && y;
	#else
		return x && z;
	#endif
	
	#ifdef  VAR == 1
		#define ELEMS5087e2d9386d42d994a78622e79c445b , 3
	#else
		#define ELEMS5087e2d9386d42d994a78622e79c445b ""
	#endif
	int id[] = {
		1,
		2
		ELEMS5087e2d9386d42d994a78622e79c445b
	};
}


