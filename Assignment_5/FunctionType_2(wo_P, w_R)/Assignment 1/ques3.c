#include<stdio.h>  

int sumOfDigits();
int reverseNum();

void main()  {
	 int sum = sumOfDigits();
     int rev = reverseNum();
     
     printf("The sum of digits is %d\n", sum);
     printf("The reverse number is %d\n", rev);
}

int sumOfDigits()  {
	int num = 104;
	int sum, r1, r2, r3;
	int rev = 0;
	
	r1 = num%10;
	num = num/10;
	
	r2 = num%10;
	num = num/10;
	
	r3 = num%10;
	num = num/10;
	
	sum = r1 + r2 + r3;
	
	return sum;
}

int reverseNum()   {
	int num = 104;
	int sum, r;
	int rev = 0;

	r = num%10;
	num = num/10;
	rev = (rev * 10) + r;
	
	r = num%10;
	num = num/10;
	rev = (rev * 10) + r;
	
	r = num%10;
	num = num/10;
	rev = (rev * 10) + r;
	
	return rev;
	
}