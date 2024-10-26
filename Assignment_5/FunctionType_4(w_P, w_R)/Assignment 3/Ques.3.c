#include<stdio.h> 

int sumInRange(int start,int end)  {
	
	//using  while loop
	int sum = 0;
	while(start<=end)  {

	    sum = sum + start;
		start++;		
	}
	return sum;
	
	/*
	//using for loop
	int sum2 = 0;
	for(int i=4; i<=23; i++)  {
		sum2 = sum2 + i;
	}
	printf("The sum is %d", sum2);
	*/
}

void main()  {
	
	int res = sumInRange(4, 23);
	printf("The sum is %d\n", res);
}