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
		#define VAR6336691 case '+':             printf("%.1f + %.1f = %.1f",num1, num2, num1+num2);             break;  
	#else
		#define VAR6336691 ""
	#endif
	switch (o){
		VAR6336691

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
	
	int var6337696 = (num1==4);
	#ifdef VAR==5
		var6337696 = var6337696 && num2==6;
	#endif
	if(var6337696){
		num2 = num2 + 1;
	}
}
