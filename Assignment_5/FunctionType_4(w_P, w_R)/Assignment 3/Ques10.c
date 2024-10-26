#include<stdio.h> 

int sum(int num)  {
	int first, last, sum = 0;
	
	//find last digit
	last = num%10;
	
	//find first digit
	while(num>10)  {
		num = num/10;
	}
	first = num;
	
	sum = first + last; 
	return sum;
}
void main()    {
	
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	int res = sum(num);
	
	printf("Sum of first and last digit = %d", res);
}