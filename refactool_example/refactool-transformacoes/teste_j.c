#include<stdio.h>
#define VAR 64


int main()
{
	int x = 1;
	int y = 2;

	int var7064438 = 1;
	#ifdef VAR == 1
		var7064438 =  (x == 1);
	#endif
	if (var7064438) {
		x++;
	
	}

	
    int num1,num2;
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    printf("HCF of %d and %d is ",num1 , num2);
    while(num1!=num2)
    {
	#ifdef  VAR == 2        
		if(var7064438){

		num1-=num2;
        
		}
		var7064438 = !(var7064438);
	#else
		var7064438 = 1;
	#endif
	if(var7064438){

            num2-=num1;
		
	}

    }
    printf("%d",num1);
    return 0;
	
	
	
	
	#define PARAM0706644 int var0706644 = (x==4);
	#ifdef VAR==5
		var0706644 = var0706644 && y==6;
	
#else
	#define PARAM0706644 ""
#endif
int  var7064438 = (PARAM0706644){
	
		y = y + 1;
	
}

}
