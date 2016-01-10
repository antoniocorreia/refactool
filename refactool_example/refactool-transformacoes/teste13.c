#include <stdio.h>
#define SIZE 64

#ifdef SIZE == 64
	
	#define PARAM0176323 int x

#else
	#define PARAM0176323 ""
#endif
void  function(PARAM0176323){
	
	//lines of code

}
;

int main()
{
    char o;
    float num1,num2;
    printf("Enter operator either + or - or * or divide : ");
    scanf("%c",&o);
    printf("Enter two operands: ");
    scanf("%f%f",&num1,&num2);
    #ifdef SIZE == 64
		#define VAR0160696 case '+':
            printf("%.1f + %.1f = %.1f",num1, num2, num1+num2);
            break;
	
	#else
		#define VAR0160696 ""
	#endif
	switch (o){
		VAR0160696

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
	
	
	int var0129446 =  (x==1);
	if (var0129446){


		//lines of code 1
	
	
	}
	#ifdef SIZE == 1						 
		 if(!(var0129446) && (x == 2)){


			//lines of code 2
		
		
		}
	#endif
	
	int z = 1;
	int w = 2;
	#ifdef SIZE == 2
		
	#define PARAM0176323 int var0176323 = (z == 2);
	#else
		int var0176323 = (z == 4);
	
#else
	#define PARAM0176323 ""
#endif
int  var0160696 = 1;
	#ifdef z == 1
		var0160696 =  (PARAM0176323){
	
		z++;
	
}

}