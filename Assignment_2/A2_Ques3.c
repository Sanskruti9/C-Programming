#include<stdio.h>  

void main()  {
	
	int num1, num2, ans;
	char operator;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &operator);
	
	if(operator=='+')  {
		ans = num1+num2;
		//printf("%d", ans);
	}
	else if(operator=='-')  {
		ans = num1-num2;
		//printf("%d", ans);
	}
	else if(operator=='/')  {
		if(num2!=0) 
		   ans = num1/num2;
		else 
		   ans = num2/num1;
		//printf("%d", ans);
	}
	else if(operator=='*')  {
		ans = num1*num2;
		//printf("%d", ans);
	}
	else if(operator=='%')  {	
	    ans=num1%num2;
	    //printf("%d", ans);
	}         
	else {
		printf("Invalid operator");
	}
	printf("%d",ans);
	
}