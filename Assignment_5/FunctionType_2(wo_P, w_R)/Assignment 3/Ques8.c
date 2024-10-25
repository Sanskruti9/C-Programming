#include<stdio.h>

int strongNo()  {
	int num = 145;
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
		return 1;
	}
	else   {
		return 0;
	}
}
void main()  {
	int num = 145;
	int res = strongNo();
	if(res==1)  
	   	 printf("%d is Strong", num);
	else 
	     printf("%d is Not Strong", num);
	
}