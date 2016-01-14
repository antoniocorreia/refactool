#include <stdio.h>
#define VAR 64
#ifdef VAR == 64
	#define PARAMabf19903047a4e6e9d2c33319f0fea1d int x
#else
	#define PARAMabf19903047a4e6e9d2c33319f0fea1d ""
#endif
void function(PARAMabf19903047a4e6e9d2c33319f0fea1d){
	//lines of code
};
#ifdef VAR == 642
	#define PARAM946c07a71c1a458eaef475ff6bd282b5 int y
#else
	#define PARAM946c07a71c1a458eaef475ff6bd282b5 ""
#endif
void function2(PARAM946c07a71c1a458eaef475ff6bd282b5){
	//lines of code 2
};

main()
{
	int x = 1;
	int y = 2;

	int id[] = {1,
		2
	#ifdef VAR == 1
		,3
	#endif
	};

	#ifdef VAR == 1
		if (x == 1)
	#endif
	{
		x++;
	};

	#ifdef VAR == 64
		if (x == 1){
	#else
		if (x == 2){
	#endif
		x++;
	}

	if (x==4
	#ifdef VAR==5
		&& y==6
	#endif
	){
		y = y + 1;
	}
}


