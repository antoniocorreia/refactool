#include<stdio.h>
#define VAR 64


int main()
{
	int x = 1;
	int y = 2;

	int varb58f821b024c48e9aec119c28de35e79 = 1;
	int varc662ba1a313342aaa81065c6e086ae5a =  (varb58f821b024c48e9aec119c28de35e79) ;
	#ifdef VAR == 1varb58f821b024c48e9aec119c28de35e79 =  (x == 1);#endif
	if(varc662ba1a313342aaa81065c6e086ae5a){
		x++;
	}
	
    int num1,num2;
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    printf("HCF of %d and %d is ",num1 , num2);
    while(num1!=num2)
    {
	#ifdef VAR == 2
        if(num1>num2){
		num1-=num2;
        }
	varc662ba1a313342aaa81065c6e086ae5a = !(varc662ba1a313342aaa81065c6e086ae5a);
	#else
	varc662ba1a313342aaa81065c6e086ae5a = 1;
	#endif
	if(varc662ba1a313342aaa81065c6e086ae5a){
            num2-=num1;
		}
    }
    printf("%d",num1);
    return 0;
	
	
	
	int varc98ba68626694cd385472d6f55798130 = (x==4);
	#ifdef VAR==5
		varc98ba68626694cd385472d6f55798130 = varc98ba68626694cd385472d6f55798130 && y==6;
	#endif
	if(varc98ba68626694cd385472d6f55798130){
		y = y + 1;
	}
}
