#include<stdio.h>  

void addition()   {
	
	int num1, num2, ans;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	ans = num1+num2;
	printf("%d", ans);
}

void subtraction()  {
	
	int num1, num2, ans;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
    ans = num1-num2;
	printf("%d", ans);
}

void division()  {
	
	int num1, num2, ans;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

    if(num2!=0) 
		ans = num1/num2;
	else 
		ans = num2/num1;
		printf("%d", ans);
}

void multiply()  {
	
	int num1, num2, ans;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
    ans = num1*num2;
	printf("%d", ans);
}

void modulo() {
	
	int num1, num2, ans;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	ans=num1%num2;
	printf("%d", ans);
	
}

void main()  {
	char operator;
	printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &operator);
    
	if(operator=='+')  {
		addition();
	}
	else if(operator=='-')  {
		subtraction();
	}
	else if(operator=='/')  {
		division();
	}
	else if(operator=='*')  {
		multiply();
	}
	else if(operator=='%')  {	
	    modulo();
	}         
	else {
		printf("Invalid operator");
	}  
}
     
