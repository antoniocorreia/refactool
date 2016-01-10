#include <stdio.h>
#define SIZE 64

int main()
{
    char o;
    float num1,num2;
    printf("Enter operator either + or - or * or divide : ");
    scanf("%c",&o);
    printf("Enter two operands: ");
    scanf("%f%f",&num1,&num2);
    #ifdef SIZE == 64
		#define VAR9691924 case '+':
            printf("%.1f + %.1f = %.1f",num1, num2, num1+num2);
            break;
	
	#else
		#define VAR9691924 ""
	#endif
	switch (o){
		VAR9691924

        case '-':
            printf("%.1f - %.1f = %.1f",num1, num2, num1-num2);
            break;
        case '*':
            printf("%.1f * %.1f = %.1f",num1, num2, num1*num2);
            break;
	#ifdef SIZE == 64
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
	
	int var9691924 = (num1==4);
	#ifdef SIZE==5
		var9691924 = var9691924 && num2==6;
	#endif
	if(var9691924){
		num2 = num2 + 1;
	}
}