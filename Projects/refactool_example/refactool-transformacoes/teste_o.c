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
   
 int varc9b2c0aeef8b4e6ea8084fca86e8912f =  ( c.img >= 0 );
#ifdef VAR == 6
	if(varc9b2c0aeef8b4e6ea8084fca86e8912f){
		printf("Sum of two complex numbers = %d + %di\n", c.real, c.img);
	}
	varc9b2c0aeef8b4e6ea8084fca86e8912f = !(varc9b2c0aeef8b4e6ea8084fca86e8912f);
#else
	varc9b2c0aeef8b4e6ea8084fca86e8912f = 1;
#endif
if(varc9b2c0aeef8b4e6ea8084fca86e8912f){
		printf("Sum of two complex numbers = %d %di\n", c.real, c.img);
	}
	return 0;
}
