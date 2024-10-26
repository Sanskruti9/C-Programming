#include<stdio.h>

int perfectNo(int num)  {

	int sum = 0;
	for(int i=1; i<=num/2; i++)  {
		if(num%i==0)  {
			sum = sum + i;
		}
	}
	if(sum==num)  {
		return 1;
	}
	else   {
		return 0;
	}
}
void main()  {
	 int num;
	 printf("Enter the number: ");
	 scanf("%d", &num);
	 
	 int res = perfectNo(num);
	 if(res==1)
	     printf("%d is a perfect number", num);
	 else 
	     printf("%d is not perfect number", num);
}