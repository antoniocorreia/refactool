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
		#define varb2cc1ea7702844fbabfaf7dff340bada case '+':             printf("%.1f + %.1f = %.1f",num1, num2, num1+num2);             break;  
	#else
		#define varb2cc1ea7702844fbabfaf7dff340bada ""
	#endif
	switch (o){
		varb2cc1ea7702844fbabfaf7dff340bada
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
	
	int var14ad5110e63043918d47ed41a9289871 = (num1==4);
	#ifdef VAR==5
		var14ad5110e63043918d47ed41a9289871 = var14ad5110e63043918d47ed41a9289871 && num2==6;
	#endif
	if(var14ad5110e63043918d47ed41a9289871){
		num2 = num2 + 1;
	}
}
