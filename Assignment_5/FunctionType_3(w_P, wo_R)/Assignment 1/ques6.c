#include<stdio.h>  

void eligibletoMarry(int, int);

void main()  {
	
	eligibletoMarry(28, 24);
}

void eligibletoMarry(int maleAge, int femaleAge)  {
	 
	if(maleAge >= 21 && femaleAge >= 18)  {
		printf("Eligible to marry");
	}
	else  {
		printf("Not eligible to marry");
	}
}