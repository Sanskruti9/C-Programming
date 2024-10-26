#include<stdio.h>

int isArmstrong(int);
int getCount(int);
int power(int, int);

void main()  {
	
	int num = 153;
	int res = isArmstrong(num);
	if(res==1)  {
		printf("%d is armstrong", num);
	}
	else{
		printf("%d is not armstrong", num);
	}
}

int isArmstrong(int num)  {
	int rem, sum = 0;
	int count = getCount(num);
	int temp =  num;
	
	while(num>0)  {
		rem = num%10;
		sum = sum + power(rem, count);
		num= num/10;
	}
	if(sum==temp)
	    return 1;
	else 
	    return 0;
}

int getCount(int num)  {
	int count = 0;
	while(num>0)  {
		count++;
		num = num/10;
	}
	return count;
}

int power(int b, int e)  {
	int res = 1;
	for(int i=1;i<=e; i++)  {
		res = res * b;
	}
	return res;
}