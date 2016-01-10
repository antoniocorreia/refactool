#include <stdio.h>
#define SIZE 64

//C program to print Floyd's triangle using recursion
 
void print_floyd(int);
 
int main() 
{
	int n, i,  c, a = 1;
 
	printf("Input number of rows of Floyd's triangle to print\n");
	scanf("%d", &n);
 
	print_floyd(n);
 
	return 0;
}
 
void print_floyd(
#ifdef SIZE == 64
int n
#endif
){
	static int row = 1, c = 1;
	int d;
 #ifdef SIZE == 1
	if (n <= 0)
#endif
	{
		return;
	}
	for (d = 1; d <= row; ++d)
		printf("%d ", c++);
 
	printf("\n");
	row++;
 
	print_floyd(--n);   
}