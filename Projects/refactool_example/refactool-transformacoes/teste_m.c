#include <stdio.h>
#define VAR 64
#ifdef VAR == 64
	#define PARAMcbae74dea158416d885a994aa58bf389 int x
#else
	#define PARAMcbae74dea158416d885a994aa58bf389 ""
#endif
void function(PARAMcbae74dea158416d885a994aa58bf389){
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
	int var93d0e5c8a7c049dcb625870124f0ae35 = 1;
	#ifdef z == 1
		var93d0e5c8a7c049dcb625870124f0ae35 =  (z == 1);
	#endif
	if (var93d0e5c8a7c049dcb625870124f0ae35) {
		z++; 
	}
	
	#ifdef VAR == 2
		int vara3a27a8b9e2c48aa9cc3d4b60700d0b9 = (z == 2);
	#else
		int vara3a27a8b9e2c48aa9cc3d4b60700d0b9 = (z == 4);
	#endif
	if(vara3a27a8b9e2c48aa9cc3d4b60700d0b9){
		z++;
	}
	
	return 0;
}
