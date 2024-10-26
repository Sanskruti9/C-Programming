#include<stdio.h>

int fact(int);
int isStrong(int);

int main()  {
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	if(isStrong(num))   
	     printf("%d is strong number", num);
	else 
	     printf("%d is not strong number", num);
}

int isStrong(int num)  {
	
	int rem, sum = 0;
	int org = num;
	while(num>0)  {
		rem = num%10;
		sum = sum + fact(rem);
	    num = num/10;	
	}
	if(sum==org)  
		return 1;
	else   
		return 0;

}

int fact(int rem) {
	int fact = 1;
	for(int i=1; i<=rem; i++) {
		fact = fact*i;	
	}
	return fact;
}
