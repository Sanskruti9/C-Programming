#include<stdio.h>  

int addition()   {
	
	int num1, num2, ans;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	ans = num1+num2;
	return ans;
}

int subtraction()  {
	
	int num1, num2, ans;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
    ans = num1-num2;
    return ans;
}

int division()  {
	
	int num1, num2, ans;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

    if(num2!=0) 
		ans = num1/num2;
	else 
		ans = num2/num1;
	return ans;
}

int multiply()  {
	
	int num1, num2, ans;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
    ans = num1*num2;
    return ans;
}

int modulo() {
	
	int num1, num2, ans;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	ans=num1%num2;
	return ans;
}

void main()  {
	char operator;
	printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &operator);
    
    int ans;
    
	if(operator=='+')  {
		ans = addition();
		printf("Sum = %d", ans);
	}
	else if(operator=='-')  {
		subtraction();
		printf("Subtraction = %d", ans);
	}
	else if(operator=='/')  {
		ans = division();
		printf("Division = %d", ans);
	}
	else if(operator=='*')  {
		ans = multiply();
		printf("Multiplication = %d", ans);
	}
	else if(operator=='%')  {	
	    ans = modulo();
	    printf("Modulo = %d", ans);
	}         
	else {
		printf("Invalid operator");
	}  	
}
     
