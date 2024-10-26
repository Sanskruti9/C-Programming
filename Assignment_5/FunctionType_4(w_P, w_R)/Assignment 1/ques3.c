#include<stdio.h>  

int sumOfDigits(int);
int reverseNum(int);

void main()  {
	
	 int num = 104;
	 int Sum = sumOfDigits(num);
	 printf("The sum of digits is %d\n", Sum);
	 
     int rev = reverseNum(num);
     printf("The reverse number is %d\n", rev);
     
}

int sumOfDigits(int num)  {

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
	return sum;
}

int reverseNum(int num)   {
	
	int sum, r;
	int rev = 0;
	
	//find sum of digits and reverse a number
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