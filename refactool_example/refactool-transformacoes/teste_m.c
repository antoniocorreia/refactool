#include <stdio.h>
#define VAR 64

#ifdef VAR == 64
	
	#define PARAM6838734 int x

#else
	#define PARAM6838734 ""
#endif
void  function(PARAM6838734){
	
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
		#define VAR6830731 case '+':             printf("%.1f + %.1f = %.1f",num1, num2, num1+num2);             break;  
	#else
		#define VAR6830731 ""
	#endif
	switch (o){
		VAR6830731

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
	
	
	int var6778696 =  (x==1);
	if (var6778696){


		//lines of code 1
	
	
	}
	#ifdef VAR == 1						 
		 if(!(var6778696) && (x == 2)){


			//lines of code 2
		
		
		}
	#endif
	
	int z = 1;
	int w = 2;
	#ifdef VAR == 2
		
	#define PARAM6831731 int var6831731 = (z == 2);
	#else
		int var6831731 = (z == 4);
	
#else
	#define PARAM6831731 ""
#endif
int  var6813722 = 1;
	#ifdef z == 1
		var6813722 =  (PARAM6831731){
	
		z++;
	
}

}
