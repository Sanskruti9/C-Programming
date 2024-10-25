#include<stdio.h>  

int eligibletoMarry();

void main()  {
	
	int res = eligibletoMarry();
	if(res==1)
	    printf("Eligible to marry");
	else 
	    printf("Not eligible to marry");
}

int eligibletoMarry()  {
	int maleAge = 28;
	int femaleAge = 24;
	
	if(maleAge >= 21 && femaleAge >= 18)  
		return 1;
	else  
	    return 0;	
}