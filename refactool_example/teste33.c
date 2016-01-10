#include <stdio.h>
#define SIZE 64

//C program to generate and print armstrong numbers
 
int check_armstrong(int);
int power(int, int);
 
int main () {
	int c, a, b;
 
	printf("Input two integers\n");
	scanf("%d%d", &a, &b);
 
	for (c = a; c <= b; c++) {
#ifdef SIZE == 1
		if (check_armstrong(c) == 1)
#endif
		{
			printf("%d\n", c);
		}
	}
 
	return 0;
}
 
int check_armstrong(
#ifdef SIZE == 1
int n
#endif
){
	long long sum = 0, temp;
	int remainder, digits = 0;
 
	temp = n;
 
	while (temp != 0) {
		digits++;
		temp = temp/10;
	}
 
	temp = n;
 
	while (temp != 0) {
		remainder = temp%10;
		sum = sum + power(remainder, digits);
		temp = temp/10;
	}
 
 #ifdef SIZE == 1
	if (n == sum){
		return 1;
	} else
#endif
	{
		return 0;
	}
}
 
int  power(int n, int r) {
	int c, p = 1;
 
	for (c = 1; c <= r; c++) 
		p = p*n;
 
	return p;   
}