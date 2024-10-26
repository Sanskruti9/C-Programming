#include<stdio.h>  

int eligibletoMarry(int, int);

void main()  {
	
	int maleAge, femaleAge;
	
	int res = eligibletoMarry(28,24);
	
	if(res==1) 
	    printf("Eligible to marry");
	else 
	    printf("Not eligible to marry");
}

int eligibletoMarry(int maleAge, int femaleAge)  {
	
	if(maleAge >= 21 && femaleAge >= 18)  
		return 1;
	else  
	    return 0;
	
}