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
	
	if (num1==4
	#ifdef VAR==5
		&& num2==6
	#endif
	){
		num2 = num2 + 1;
	}
}
