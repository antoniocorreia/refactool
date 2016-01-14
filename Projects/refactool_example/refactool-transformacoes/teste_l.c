#include <stdio.h>
#define VAR 64

int main()
{
    char o;
    float num1,num2;
    printf("Enter operator either + or - or * or divide : ");
    scanf("%c",&o);
    printf("Enter two operands: ");
    scanf("%f%f",&num1,&num2);
    #ifdef VAR == 64
		#define var6a283903c9f34242ab627988be79fa72 case '+':             printf("%.1f + %.1f = %.1f",num1, num2, num1+num2);             break;  
	#else
		#define var6a283903c9f34242ab627988be79fa72 ""
	#endif
	switch (o){
		var6a283903c9f34242ab627988be79fa72
        case '-':
            printf("%.1f - %.1f = %.1f",num1, num2, num1-num2);
            break;
        case '*':
            printf("%.1f * %.1f = %.1f",num1, num2, num1*num2);
            break;
	#ifdef VAR == 64
        case '/':
            printf("%.1f / %.1f = %.1f",num1, num2, num1/num2);
            break;
	#endif
        default:
            /* If operator is other than +, -, * or /, error message is shown */
            printf("Error! operator is not correct");
            break;
    }
    return 0;
	
	int var86578ef04e1541ca874d7c6137bff54a = (num1==4);
	#ifdef VAR==5
		var86578ef04e1541ca874d7c6137bff54a = var86578ef04e1541ca874d7c6137bff54a && num2==6;
	#endif
	if(var86578ef04e1541ca874d7c6137bff54a){
		num2 = num2 + 1;
	}
}
