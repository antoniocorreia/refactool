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
   
 int vara0d0becabc3247ec95a1af0932aabf03 =  ( c.img >= 0 );
#ifdef VAR == 6
	if(vara0d0becabc3247ec95a1af0932aabf03){
		printf("Sum of two complex numbers = %d + %di\n", c.real, c.img);
	}
	vara0d0becabc3247ec95a1af0932aabf03 = !(vara0d0becabc3247ec95a1af0932aabf03);
#else
	vara0d0becabc3247ec95a1af0932aabf03 = 1;
#endif
if(vara0d0becabc3247ec95a1af0932aabf03){
		printf("Sum of two complex numbers = %d %di\n", c.real, c.img);
	}
	return 0;
}
