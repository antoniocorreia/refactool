#include<stdio.h>
#define SIZE 64

#Refactoring 5 - caso sem a chave

int main()
{
    int num1,num2;
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    printf("HCF of %d and %d is ",num1 , num2);
    while(num1!=num2)
    {
	
	#ifdef SIZE == 2
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
	
	#ifdef SIZE == 1
		if (x == 1)
	#endif
	{
		x++; 
	}
	
	#ifdef SIZE == 1
		if (x == 1){
	#else
		if (x == 2){
	#endif
		x++; 
	}
}