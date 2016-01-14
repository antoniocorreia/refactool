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
	#define PARAM7beba6f38c9243938211449221cac76e int y
#else
	#define PARAM7beba6f38c9243938211449221cac76e ""
#endif
void function2(PARAM7beba6f38c9243938211449221cac76e){
	//lines of code 2
};

main()
{
	int x = 1;
	int y = 2;

	#ifdef  VAR == 1
		#define ELEMS0f822fe85deb4d14b9e7348447116d5f , 3
	#else
		#define ELEMS0f822fe85deb4d14b9e7348447116d5f ""
	#endif
	int id[] = {
		1,
		2
		ELEMS0f822fe85deb4d14b9e7348447116d5f
	};

	int var39145f2b6f0c4ddb8f78d483dfd93a4f = 1;
	#ifdef VAR == 1
		var39145f2b6f0c4ddb8f78d483dfd93a4f =  (x == 1);
	#endif
	if (var39145f2b6f0c4ddb8f78d483dfd93a4f) {
		x++;
	};

	#ifdef VAR == 64
		int varbef9b8ede7044247a871850e59cbbbfc = (x == 1);
	#else
		int varbef9b8ede7044247a871850e59cbbbfc = (x == 2);
	#endif
	if(varbef9b8ede7044247a871850e59cbbbfc){
		x++;
	}

	int var23a00336e7fd440d8d993d5e1b0502ca = (x==4);
	#ifdef VAR==5
		var23a00336e7fd440d8d993d5e1b0502ca = var23a00336e7fd440d8d993d5e1b0502ca && y==6;
	#endif
	if(var23a00336e7fd440d8d993d5e1b0502ca){
		y = y + 1;
	}
}


