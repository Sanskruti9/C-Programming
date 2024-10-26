#include<stdio.h>  

void addition(int num1, int num2)   {
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	printf("%d", num1+num2);
}

void subtraction(int num1, int num2)  {
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	printf("%d", num1-num2);
}

void division(int num1, int num2)  {
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	printf("%d", num1/num2);
}

void multiply(int num1, int num2)  {
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	printf("%d", num1*num2);
}

void modulo(int num1, int num2) {
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	printf("%d", num1%num2);
	
}

void main()  {
	char operator;
	printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &operator);
	
	int num1, num2;
	
	if(operator=='+')  {
		addition(num1, num2);
	}
	else if(operator=='-')  {
		subtraction(num1, num2);
	}
	else if(operator=='/')  {
		division(num1, num2);
	}
	else if(operator=='*')  {
		multiply(num1, num2);
	}
	else if(operator=='%')  {	
	    modulo(num1, num2);
	}         
	else {
		printf("Invalid operator");
	}  
}
     
