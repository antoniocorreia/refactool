#include <stdio.h>
#define VAR 64
 
struct complex
{
   int real, img;
};
 
int main()
{
   struct complex a, b, c;
 
   printf("Enter a and b where a + ib is the first complex number.\n");
   printf("a = ");
   scanf("%d", &a.real);
   printf("b = ");
   scanf("%d", &a.img);
   printf("Enter c and d where c + id is the second complex number.\n");
   printf("c = ");
   scanf("%d", &b.real);
   printf("d = ");
   scanf("%d", &b.img);
 
   c.real = a.real + b.real;
   c.img = a.img + b.img;
   
 int var1059664 =  ( c.img >= 0 );
	#ifdef  VAR == 6
		if(var1059664){

		printf("Sum of two complex numbers = %d + %di\n", c.real, c.img);
	
		}
		var1059664 = !(var1059664);
	#else
		var1059664 = 1;
	#endif
	if(var1059664){

		printf("Sum of two complex numbers = %d %di\n", c.real, c.img);
	
	}

	return 0;
}
