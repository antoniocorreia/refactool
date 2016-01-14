#include <stdio.h>
#define VAR 64

//Pascal triangle in c
 
long factorial(int);
 #ifdef VAR == 64
	#define PARAMe40c787aa5d543fb8d5a7bbad3b1bbba int n
#else
	#define PARAMe40c787aa5d543fb8d5a7bbad3b1bbba ""
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
 
long factorial(PARAMe40c787aa5d543fb8d5a7bbad3b1bbba){
   int c;
   long result = 1;
 
   for (c = 1; c <= n; c++)
         result = result*c;
 
   return result;
}
