#include<stdio.h>
#define VAR 64


int main()
{
	int x = 1;
	int y = 2;

	int var0bc29b64875848b3a06bd79ecc4efde5 = 1;
	int var6d0a366599cc4a7c9f5395358af1f061 =  (var0bc29b64875848b3a06bd79ecc4efde5) ;
	#ifdef VAR == 1var0bc29b64875848b3a06bd79ecc4efde5 =  (x == 1);#endif
	if(var6d0a366599cc4a7c9f5395358af1f061){
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
	var6d0a366599cc4a7c9f5395358af1f061 = !(var6d0a366599cc4a7c9f5395358af1f061);
	#else
	var6d0a366599cc4a7c9f5395358af1f061 = 1;
	#endif
	if(var6d0a366599cc4a7c9f5395358af1f061){
            num2-=num1;
		}
    }
    printf("%d",num1);
    return 0;
	
	
	
	int var78b33f691ad14e4c8efd5dee827cf32b = (x==4);
	#ifdef VAR==5
		var78b33f691ad14e4c8efd5dee827cf32b = var78b33f691ad14e4c8efd5dee827cf32b && y==6;
	#endif
	if(var78b33f691ad14e4c8efd5dee827cf32b){
		y = y + 1;
	}
}
