#include <stdio.h>
#define VAR 64

//Pascal triangle in c
 
long factorial(int);
 
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
 
      pr#ifdef VAR == 64
	
	#define PARAM2386454 int n

#else
	#define PARAM2386454 ""
#endif
int f(PARAM2386454){
	
   int c;
   long result = 1;
 
   for (c = 1; c <= n; c++)
         result = result*c;
 
   return result;

}

