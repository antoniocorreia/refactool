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

	int var44f38441658340b8aad02c67ad0c3d1e = 1;
	#ifdef VAR == 1
		var44f38441658340b8aad02c67ad0c3d1e =  (x == 1);
	#endif
	if (var44f38441658340b8aad02c67ad0c3d1e) {
		x++;
	}

	#ifdef VAR == 1
		int var7b18d091c4fd4ca29267ba0affac45bf = (x == 1);
	#else
		int var7b18d091c4fd4ca29267ba0affac45bf = (x == 2);
	#endif
	if(var7b18d091c4fd4ca29267ba0affac45bf){
		x++;
	}
}
