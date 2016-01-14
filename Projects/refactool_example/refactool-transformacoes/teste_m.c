#include <stdio.h>
#define VAR 64
#ifdef VAR == 64
	#define PARAM458af8d33a1649d98db615402a724983 int x
#else
	#define PARAM458af8d33a1649d98db615402a724983 ""
#endif
void function(PARAM458af8d33a1649d98db615402a724983){
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
	int var6fcd72fae6074b26bb23812d44a6d1c4 = 1;
	#ifdef z == 1
		var6fcd72fae6074b26bb23812d44a6d1c4 =  (z == 1);
	#endif
	if (var6fcd72fae6074b26bb23812d44a6d1c4) {
		z++; 
	}
	
	#ifdef VAR == 2
		int var06993223f06a48bf8ad3629c0d7a2182 = (z == 2);
	#else
		int var06993223f06a48bf8ad3629c0d7a2182 = (z == 4);
	#endif
	if(var06993223f06a48bf8ad3629c0d7a2182){
		z++;
	}
	
	return 0;
}
