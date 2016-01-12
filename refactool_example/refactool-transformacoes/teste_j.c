#include<stdio.h>
#define SIZE 64


int main()
{
	int x = 1;
	int y = 2;

	int var9740578 = 1;
	#ifdef SIZE == 1
		var9740578 =  (x == 1);
	#endif
	if (var9740578) {
		x++;
	
	}

	
    int num1,num2;
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    printf("HCF of %d and %d is ",num1 , num2);
    while(num1!=num2)
    {
	#ifdef  SIZE == 2        
		if(var9740578){

		num1-=num2;
        
		}
		var9740578 = !(var9740578);
	#else
		var9740578 = 1;
	#endif
	if(var9740578){

            num2-=num1;
		
	}

    }
    printf("%d",num1);
    return 0;
	
	
	
	
	#define PARAM9740578 int var9740578 = (x==4);
	#ifdef SIZE==5
		var9740578 = var9740578 && y==6;
	
#else
	#define PARAM9740578 ""
#endif
int  var9740578 = (PARAM9740578){
	
		y = y + 1;
	
}

}