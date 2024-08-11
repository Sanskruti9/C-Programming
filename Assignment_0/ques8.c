// Assign two number and swap it using third variable

#include<stdio.h>  

void main()  {
	
	int num1 = 10, num2 = 20;
	
	int temp = num1;
	
	num1 =  num2;
	num2 = temp;
	
	printf("%d\n", temp);
	printf("num1 = %d, num2 = %d" , num1, num2);
}