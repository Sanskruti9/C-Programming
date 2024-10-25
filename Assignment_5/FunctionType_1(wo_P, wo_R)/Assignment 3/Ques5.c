#include<stdio.h> 

void armstrongNum()  {
	
	int num = 370;
	int rem, sum = 0;
	int org = num;
	while(num>0)  {
		rem = num%10;
		sum = sum + (rem*rem*rem);
		num = num/10;
	}
	if(sum==org)  {
		printf("%d is a armstrong number\n", org);
	}
	else {
		printf("%d is not armstrong number\n", org);
	
	}
}
void main()  {
	
	armstrongNum();
}