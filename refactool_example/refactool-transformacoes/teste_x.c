#include <stdio.h>
#define VAR 64


int main(int argc, char *argv[]) {
char ch;
int num1, num2;

printf("\nBasic operation:");
printf("\nAdd [a]");
printf("\nSubtract [s]");
printf("\nMultiply [m]");
printf("\nDivide [d]");

printf("\nEnter character for operation:");
scanf("%c", &ch);

printf("\nEnter two numbers for operation:");
printf("\nEnter num1=");
scanf("%d", &num1);
printf("\nEnter num2=");
scanf("%d", &num2);

#ifdef VAR == 64    
		#define VAR9869459 case 'a':         printf("\nAddition of num1 and num2=%d", (num1+num2));         break; 
	#else
		#define VAR9869459 ""
	#endif
	switch (ch){
		VAR9869459


    case 's':
        printf("\nSubtraction of num1 and num2=%d", (num1-num2));
        break;

    case 'm':
        printf("\nMultiplication of num1 and num2=%d", (num1*num2));
        break;

    case 'd':
        printf("\nDivision of num1 and num2=%d", (num1/num2));
        break;
    case 'x':
        printf ("\nTest switch case1");
    case 'y':
        printf ("\nTest switch case2");
    default:
        printf("\nInvalid value eneterd");
        break;
}
printf("\n");
return 0;
}
