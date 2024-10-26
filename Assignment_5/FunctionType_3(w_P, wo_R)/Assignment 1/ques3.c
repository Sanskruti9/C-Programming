#include<stdio.h>  

void sumOfDigits(int);
void reverseNum(int);

void main()  {
	
     sumOfDigits(104);
     reverseNum(104);
}

void sumOfDigits(int num)  {
	
	int sum, r1, r2, r3;
	int rev = 0;
	
	//find sum of digits and reverse a number
	r1 = num%10;
	num = num/10;
	
	r2 = num%10;
	num = num/10;
	
	r3 = num%10;
	num = num/10;
	
	sum = r1 + r2 + r3;
	printf("The sum of digits is %d\n", sum);
	
}

void reverseNum(int num)   {

	int sum, r1, r2, r3;
	int rev = 0;
	
	//find sum of digits and reverse a number
	r1 = num%10;
	num = num/10;
	rev = (rev * 10) + r1;
	
	r2 = num%10;
	num = num/10;
	rev = (rev * 10) + r2;
	
	r3 = num%10;
	num = num/10;
	rev = (rev * 10) + r3;
	
	printf("The reverse number is %d\n", rev);
}