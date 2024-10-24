#include<stdio.h>

void main()  {
	
	int start = 1, end = 500;
	for(int i=start; i<=end; i++)  {
		int temp = i;
		int rem, sum = 0;
		while(temp>0)  {
		rem = temp%10;
		sum = sum + (rem*rem*rem);
		temp = temp/10;
	}
	if(sum==i)  {
		printf("%d is a armstrong number\n", i);
	}
	}
	
	
	
	
	   
}