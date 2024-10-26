#include<stdio.h>  

void evenOdd(int);

void main()  {
	
	evenOdd(51);
}
void evenOdd(int num)  {
	
	if(num%2 == 0)  {
		printf("%d is Even Number", num);
	}
	else {
		printf("%d is Odd Number", num);
	}
	
}