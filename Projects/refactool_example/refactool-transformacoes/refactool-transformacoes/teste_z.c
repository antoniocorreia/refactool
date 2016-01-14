#include <stdio.h>
#define VAR 64

//Pascal triangle in c
 
long factorial(int);
 #ifdef VAR == 64
	#define PARAMe7973d4204db478aa00b660fc98fc258 int n
#else
	#define PARAMe7973d4204db478aa00b660fc98fc258 ""
#endif
int main()
{
   int i, n, c;
 
   printf("Enter the number of rows you wish to see in pascal triangle\n");
   scanf("%d",&n);
 
   for (i = 0; i < n; i++)
   {
      for (c = 0; c <= (n - i - 2); c++)
         printf(" ");
 
      for (c = 0 ; c <= i; c++)
         printf("%ld ",factorial(i)/(factorial(c)*factorial(i-c)));
 
      printf("\n");
   }
 
   return 0;
}
 
long factorial(PARAMe7973d4204db478aa00b660fc98fc258){
   int c;
   long result = 1;
 
   for (c = 1; c <= n; c++)
         result = result*c;
 
   return result;
}
