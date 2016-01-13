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
   
 int var7607081 =  ( c.img >= 0 );
	#ifdef  VAR == 6
		if(var7607081){

		printf("Sum of two complex numbers = %d + %di\n", c.real, c.img);
	
		}
		var7607081 = !(var7607081);
	#else
		var7607081 = 1;
	#endif
	if(var7607081){

		printf("Sum of two complex numbers = %d %di\n", c.real, c.img);
	
	}

	return 0;
}
