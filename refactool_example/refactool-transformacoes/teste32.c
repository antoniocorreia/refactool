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
 
void pr#ifdef SIZE == 64

	#define PARAM9853424 int n

#else
	#define PARAM9853424 ""
#endif
int _floyd(PARAM9853424){
	
	static int row = 1, c = 1;
	int d;
 int var9851422 = 1;
	#ifdef SIZE == 1
		var9851422 =  (n <= 0);
	#endif
	if (var9851422) {
		return;
	
	
}


	for (d = 1; d <= row; ++d)
		printf("%d ", c++);
 
	printf("\n");
	row++;
 
	print_floyd(--n);   
}