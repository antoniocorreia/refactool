#include <stdio.h>
#define VAR 64

void function(
#ifdef VAR == 64
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
		
	#ifdef VAR == 64
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
    
	
	
	int x = 1;
	int y = 2;
	
	
	if (x ==1){
		x++;
	}
	#ifdef VAR == 1				
		 else if(x ==2){
			y++;
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
	
	#ifdef VAR == 2
		if (z == 2){
	#else
		if (z == 4){
	#endif
		z++;
	}
	
	return 0;
}
