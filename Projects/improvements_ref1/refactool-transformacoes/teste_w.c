#include <stdio.h>
#include <string.h>
#define VAR 64

int main(){
	
int var1, var2;

printf("Input the value of var1:");
scanf("%d", &var1);
printf("Input the value of var2:");
scanf("%d",&var2);

	int var26072eb14bd1428b8b11f7fa4d458cdf = (var1 !=var2);
	if (var26072eb14bd1428b8b11f7fa4d458cdf){
		printf("var1 is not equal to var2");
	}
	#ifdef VAR == 1
		if(!(var26072eb14bd1428b8b11f7fa4d458cdf) &&  (var1 >var2)){
			printf("var1 is greater than var2");
		}
	#endif
	else if (var2 > var1)
	{
		printf("var2 is greater than var1");
	}
	else
	{
		printf("var1 is equal to var2");
	}

return 0;

}
