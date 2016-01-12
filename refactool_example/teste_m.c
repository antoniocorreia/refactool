#include <stdio.h>
#define SIZE 64

void function(
#ifdef SIZE == 64
	int x
#endif
){
	//lines of code
};

int main()
{
    char o;
    float num1,num2;
    printf("Enter operator either + or - or * or divide : ");
    scanf("%c",&o);
    printf("Enter two operands: ");
    scanf("%f%f",&num1,&num2);
    switch(o) {
        
	#ifdef SIZE == 64
		case '+':
            printf("%.1f + %.1f = %.1f",num1, num2, num1+num2);
            break;
	#endif
        case '-':
            printf("%.1f - %.1f = %.1f",num1, num2, num1-num2);
            break;
        case '*':
            printf("%.1f * %.1f = %.1f",num1, num2, num1*num2);
            break;
        case '/':
            printf("%.1f / %.1f = %.1f",num1, num2, num1/num2);
            break;
        default:
            /* If operator is other than +, -, * or /, error message is shown */
            printf("Error! operator is not correct");
            break;
    }
    return 0;
	
	int x = 1;
	int y = 2;
	
	
	if (x==1){

		//lines of code 1
	
	}
	#ifdef SIZE == 1				
		 else if(x == 2){

			//lines of code 2
		
		}
	#endif
	
	int z = 1;
	int w = 2;
	#ifdef z == 1
		if (z == 1)
	#endif
	{
		z++; 
	}
	
	#ifdef SIZE == 2
		if (z == 2){
	#else
		if (z == 4){
	#endif
		z++;
	}
}