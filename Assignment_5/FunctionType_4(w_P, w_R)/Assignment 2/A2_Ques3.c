#include<stdio.h>  

int addition(int num1, int num2)   {
	
	return num1+num2;
}

int subtraction(int num1, int num2)  {
 
	return num1-num2;
}

int division(int num1, int num2)  {
	
    if(num2!=0) 
		 return num1/num2;
	else 
		return num2/num1;
}

int multiply(int num1, int num2)  {
	
    return num1*num2;
}

int modulo(int num1, int num2) {
	
	return num1%num2;
}

void main()  {
	char operator;
	printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &operator);
    
    int num1, num2;
    printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
    
    int ans;
    
	if(operator=='+')  {
		ans = addition(num1, num2);
		printf("Sum = %d", ans);
	}
	else if(operator=='-')  {
		subtraction(num1, num2);
		printf("Subtraction = %d", ans);
	}
	else if(operator=='/')  {
		ans = division(num1, num2);
		printf("Division = %d", ans);
	}
	else if(operator=='*')  {
		ans = multiply(num1, num2);
		printf("Multiplication = %d", ans);
	}
	else if(operator=='%')  {	
	    ans = modulo(num1, num2);
	    printf("Modulo = %d", ans);
	}         
	else {
		printf("Invalid operator");
	}  	
}