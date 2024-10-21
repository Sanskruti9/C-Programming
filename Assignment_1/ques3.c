#include<stdio.h>  

void main()  {
	
	int num = 104;
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
	
	sum = r1 + r2 + r3;
	printf("The sum of digits is %d\n", sum);
	printf("The reverse number is %d\n", rev);
		
}