#include<stdio.h> 

int armstrongNum()  {
	
	int num = 370;
	int rem, sum = 0;
	int org = num;
	while(num>0)  {
		rem = num%10;
		sum = sum + (rem*rem*rem);
		num = num/10;
	}
	if(sum==org)  
		return 1;
	else 
		return 0;
}
void main()  {
	int num = 370;
	int res = armstrongNum();
	if(res==1) 
	    printf("%d is a armstrong number\n", num); 
	else 
	    printf("%d is not armstrong number\n", num);
}