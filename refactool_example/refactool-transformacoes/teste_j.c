#include<stdio.h>
#define VAR 64


int main()
{
	int x = 1;
	int y = 2;

	int var5082936 = 1;
	#ifdef VAR == 1
		var5082936 =  (x == 1);
	#endif
	if (var5082936) {
		x++;
	
	}

	
    int num1,num2;
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    printf("HCF of %d and %d is ",num1 , num2);
    while(num1!=num2)
    {
	#ifdef  VAR == 2        
		if(var5082936){

		num1-=num2;
        
		}
		var5082936 = !(var5082936);
	#else
		var5082936 = 1;
	#endif
	if(var5082936){

            num2-=num1;
		
	}

    }
    printf("%d",num1);
    return 0;
	
	
	
	
	#define PARAM5084939 int var5083938 = (x==4);
	#ifdef VAR==5
		var5083938 = var5083938 && y==6;
	
#else
	#define PARAM5084939 ""
#endif
int  var5082936 = (PARAM5084939){
	
		y = y + 1;
	
}

}
