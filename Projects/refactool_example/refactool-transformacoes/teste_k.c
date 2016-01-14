#include<stdio.h>
#define VAR 64

//#Refactoring 5 - caso sem a chave

int main()
{
    int num1,num2;
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    printf("HCF of %d and %d is ",num1 , num2);
    while(num1!=num2)
    {

	#ifdef VAR == 2
        if(num1>num2)
            num1-=num2;
        else
	#endif
            num2-=num1;
    }
    printf("%d",num1);
    return 0;

	int x = 1;
	int y = 2;



	if (x){
		//lines of code
	}

	int var2e48dbc123a1427ea60b20a001d1edf7 = 1;
	#ifdef VAR == 1
		var2e48dbc123a1427ea60b20a001d1edf7 =  (x == 1);
	#endif
	if (var2e48dbc123a1427ea60b20a001d1edf7) {
		x++;
	}

	#ifdef VAR == 1
		int var3721f4067e8a48b6a6c06e3305843877 = (x == 1);
	#else
		int var3721f4067e8a48b6a6c06e3305843877 = (x == 2);
	#endif
	if(var3721f4067e8a48b6a6c06e3305843877){
		x++;
	}
}
