#include<stdio.h>

void isStrong(int num)  {
	
	int sum = 0;
	int org = num;
	
	while(num>0) {
		int rem = num%10;
		int fact = 1;
		for(int i=1; i<=rem; i++) {
			fact = fact*i;	
		}
		sum = sum + fact;
		num = num/10;
	}
	if(sum==org)  {
		printf("%d is strong number", org);
	}
	else   {
		printf("%d is not strong number", org);
	}
}
void main()  {
	isStrong(145);	 
}