#include<stdio.h>

void printArmstrong(int start, int end)  {
	
	for(int i=start; i<=end; i++)  {
		int temp = i;
		int rem, sum = 0;
		while(temp>0)  {
		rem = temp%10;
		sum = sum + (rem*rem*rem);
		temp = temp/10;
	}
	if(sum==i)  {
		printf("%d \n", i);
	}
	}
}
void main()  {
	
	printArmstrong(1, 500);
	
	   
}