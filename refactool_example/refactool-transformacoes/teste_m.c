#include <stdio.h>
#define VAR 64

#ifdef VAR == 64
	
	#define PARAM0910041 int x

#else
	#define PARAM0910041 ""
#endif
void  function(PARAM0910041){
	
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
    #ifdef VAR == 64
		#define VAR9091407 case '+':             printf("%.1f + %.1f = %.1f",num1, num2, num1+num2);             break;  
	#else
		#define VAR9091407 ""
	#endif
	switch (o){
		VAR9091407

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
	
	
	int var0903537 =  (x==1);
	if (var0903537){


		//lines of code 1
	
	
	}
	#ifdef VAR == 1						 
		 if(!(var0903537) && (x == 2)){


			//lines of code 2
		
		
		}
	#endif
	
	int z = 1;
	int w = 2;
	#ifdef VAR == 2
		
	#define PARAM9093408 int var9092407 = (z == 2);
	#else
		int var9092407 = (z == 4);
	
#else
	#define PARAM9093408 ""
#endif
int  var9075396 = 1;
	#ifdef z == 1
		var9075396 =  (PARAM9093408){
	
		z++;
	
}

}
