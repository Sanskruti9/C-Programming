#include<stdio.h>

void main()  {
	
	int num = 496;
	int sum = 0;
	for(int i=1; i<=num/2; i++)  {
		if(num%i==0)  {
			sum = sum + i;
		}
	}
	if(sum==num)  {
		printf("%d is a perfect number", num);
	}
	else   {
		printf("%d is not perfect number", num);
	}
	 
}