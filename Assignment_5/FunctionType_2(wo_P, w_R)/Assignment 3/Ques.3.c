#include<stdio.h> 

int sumInRange()  {
	int start = 4;
	int end = 23;
	
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
	
	int sum = sumInRange();
	printf("The sum is %d\n", sum);
}