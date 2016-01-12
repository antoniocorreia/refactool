#include <stdio.h>
#define SIZE 64

#ifdef SIZE == 64
	
	#define PARAM1895285 int x

#else
	#define PARAM1895285 ""
#endif
void  function(PARAM1895285){
	
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
		#define VAR3187966 case '+':
            printf("%.1f + %.1f = %.1f",num1, num2, num1+num2);
            break;
	
	#else
		#define VAR3187966 ""
	#endif
	switch (o){
		VAR3187966

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
	
	
	int var1848409 =  (x==1);
	if (var1848409){


		//lines of code 1
	
	
	}
	#ifdef SIZE == 1						 
		 if(!(var1848409) && (x == 2)){


			//lines of code 2
		
		
		}
	#endif
	
	int z = 1;
	int w = 2;
	#ifdef SIZE == 2
		
	#define PARAM3187966 int var3187966 = (z == 2);
	#else
		int var3187966 = (z == 4);
	
#else
	#define PARAM3187966 ""
#endif
int  var1864033 = 1;
	#ifdef z == 1
		var1864033 =  (PARAM3187966){
	
		z++;
	
}

}