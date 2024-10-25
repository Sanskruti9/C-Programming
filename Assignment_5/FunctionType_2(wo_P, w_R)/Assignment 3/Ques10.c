#include<stdio.h> 

int sum()  {
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
    
    return sum;
    
}
void main()    {
	
	int ans = sum();
	printf("Sum of first and last digit = %d", ans);
	
}