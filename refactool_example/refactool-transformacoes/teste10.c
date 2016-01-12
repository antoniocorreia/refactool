#include<stdio.h>
#define SIZE 64


int main()
{
	int x = 1;
	int y = 2;

	int var3152632 = 1;
	#ifdef SIZE == 1
		var3152632 =  (x == 1);
	#endif
	if (var3152632) {
		x++;
	
	}

	
    int num1,num2;
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    printf("HCF of %d and %d is ",num1 , num2);
    while(num1!=num2)
    {
	#ifdef SIZE == 2
        if(num1>num2){
		num1-=num2;
        } else
	#endif
		{
            num2-=num1;
		}
    }
    printf("%d",num1);
    return 0;
	
	
	
	if (x==4
	#ifdef SIZE==5
		&& y==6
	#endif
	){
		y = y + 1;
	}
}