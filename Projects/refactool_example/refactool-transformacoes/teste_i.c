#include <stdio.h>
#define VAR 64

void function(
#ifdef VAR == 64
	int x
#endif
)
{
	//lines of code
};
#ifdef VAR == 642
	#define PARAMe31cb26cec5f4172be90dd77972d000e int y
#else
	#define PARAMe31cb26cec5f4172be90dd77972d000e ""
#endif
void function2(PARAMe31cb26cec5f4172be90dd77972d000e){
	//lines of code 2
};

main()
{
	int x = 1;
	int y = 2;

	#ifdef  VAR == 1
		#define ELEMSbf6ad24742c047eca801c1800162c218 , 3
	#else
		#define ELEMSbf6ad24742c047eca801c1800162c218 ""
	#endif
	int id[] = {
		1,
		2
		ELEMSbf6ad24742c047eca801c1800162c218
	};

	int varb35f0a42bc164af9b03bc1b66fa04292 = 1;
	#ifdef VAR == 1
		varb35f0a42bc164af9b03bc1b66fa04292 =  (x == 1);
	#endif
	if (varb35f0a42bc164af9b03bc1b66fa04292) {
		x++;
	};

	#ifdef VAR == 64
		int vare0dde7f45e3f44d8a9579cc34d998181 = (x == 1);
	#else
		int vare0dde7f45e3f44d8a9579cc34d998181 = (x == 2);
	#endif
	if(vare0dde7f45e3f44d8a9579cc34d998181){
		x++;
	}

	int vardcdb8433996a4a63a45401336d447341 = (x==4);
	#ifdef VAR==5
		vardcdb8433996a4a63a45401336d447341 = vardcdb8433996a4a63a45401336d447341 && y==6;
	#endif
	if(vardcdb8433996a4a63a45401336d447341){
		y = y + 1;
	}
}


