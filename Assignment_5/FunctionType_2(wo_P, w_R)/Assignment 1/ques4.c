#include<stdio.h>  

int evenOdd();

void main()  {
	
	int num = 51;
	int res = evenOdd();
	if(res==1) 
	  printf("%d is Even Number", num);
	else
	  printf("%d is Odd Number", num);
}
int evenOdd()  {
	
	int num = 51;
	
	if(num%2 == 0)  
		return 1;
	else 
		return 0;		
}