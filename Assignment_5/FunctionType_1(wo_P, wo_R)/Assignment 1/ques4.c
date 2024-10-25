#include<stdio.h>  

void evenOdd();

void main()  {
	
	evenOdd();
}
void evenOdd()  {
	
	int num = 51;
	
	if(num%2 == 0)  {
		printf("%d is Even Number", num);
	}
	else {
		printf("%d is Odd Number", num);
	}
	
}