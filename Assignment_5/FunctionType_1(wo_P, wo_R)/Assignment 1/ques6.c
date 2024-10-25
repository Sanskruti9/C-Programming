#include<stdio.h>  

void eligibletoMarry();

void main()  {
	
	eligibletoMarry();
}

void eligibletoMarry()  {
	int maleAge = 28;
	int femaleAge = 24;
	
	if(maleAge >= 21 && femaleAge >= 18)  {
		printf("Eligible to marry");
	}
	else  {
		printf("Not eligible to marry");
	}
}