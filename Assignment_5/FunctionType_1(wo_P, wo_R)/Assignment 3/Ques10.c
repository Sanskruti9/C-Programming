#include<stdio.h> 

void sum()  {
	int num = 12345;
	int first, last, sum = 0;
	
	//find last digit
	last = num%10;
	
	//find first digit
	while(num>10)  {
		num = num/10;
	}
	first = num;
	
	sum = first + last; 

    printf("Sum of first and last digit = %d", sum);
}
void main()    {
	
	sum();
	
}