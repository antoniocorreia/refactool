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
int var6121746 = 1;
	#ifdef SIZE == 1
		var6121746 =  (check_armstrong(c) == 1);
	#endif
	if (var6121746) {
			printf("%d\n", c);
		
	}

	}
 
	return 0;
}
 
#ifdef SIZE == 1

	#define PARAM1225461 int n

#else
	#define PARAM1225461 ""
#endif
int  check_armstrong(PARAM1225461){
	
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
 
 int var1218461 =  (n == sum);
	#ifdef  SIZE == 1
		if(var1218461){

		return 1;
	
		}
		var1218461 = !(var1218461);
	#else
		var1218461 = 1;
	#endif
	if(var1218461){

		return 0;
	
	}

}
 
int  power(int n, int r) {
	int c, p = 1;
 
	for (c = 1; c <= r; c++) 
		p = p*n;
 
	return p;   
}