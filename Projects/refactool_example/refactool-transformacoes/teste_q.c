#include<stdio.h>
#define VAR 64

int factorial(int n);
int prime(int n);
int main()
{
    int n;
    printf("Enter an positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, factorial(n));
    return 0;
}
#ifdef VAR == 64
	#define PARAM768e6c9143724659a4eb2bd87e1be8ec int n
#else
	#define PARAM768e6c9143724659a4eb2bd87e1be8ec ""
#endif
int factorial(PARAM768e6c9143724659a4eb2bd87e1be8ec){
    if(n!=1)
     return n*factorial(n-1);
 
 
 int i, flag=0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=2; i<=n/2; ++i)
    {
        if (prime(i)!=0)
        {
            if ( prime(n-i)!=0)
            {
                printf("%d = %d + %d\n", n, i, n-i);
                flag=1;
            }

        }
    }
    if (flag==0)
      printf("%d can't be expressed as sum of two prime numbers.",n);
    return 0;
}

int prime(
#ifdef VAR == 62
	#ifdef  VAR == 1
		#define ELEMS6bf42343b4d4413cb3dee4e50ad75ad8 , 3
	#else
		#define ELEMS6bf42343b4d4413cb3dee4e50ad75ad8 ""
	#endif
	int n
#endif
)      /* Function to check prime number */
{
    int i, flag=1;
    int id1[] = {
		1,
		2
		ELEMS6bf42343b4d4413cb3dee4e50ad75ad8
	};
	
    for(i=2; i<=n/2; ++i)
       if(n%i==0)
          flag=0;
    return flag;

 
}
