#include<stdio.h>
#define SIZE 64


int main()
{
	int x = 1;
	int y = 2;

	int var8019967 = 1;
	#ifdef SIZE == 1
		var8019967 =  (x == 1);
	#endif
	if (var8019967) {
		x++;
	
	}

	
    int num1,num2;
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    printf("HCF of %d and %d is ",num1 , num2);
    while(num1!=num2)
    {
	#ifdef  SIZE == 2        
		if(var8019967){

		num1-=num2;
        
		}
		var8019967 = !(var8019967);
	#else
		var8019967 = 1;
	#endif
	if(var8019967){

            num2-=num1;
		
	}

    }
    printf("%d",num1);
    return 0;
	
	
	
	
	#define PARAM8035595 int var8019967 = (x==4);
	#ifdef SIZE==5
		var8019967 = var8019967 && y==6;
	
#else
	#define PARAM8035595 ""
#endif
int  var8019967 = (PARAM8035595){
	
		y = y + 1;
	
}

}