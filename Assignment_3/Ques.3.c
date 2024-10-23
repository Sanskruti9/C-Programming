#include<stdio.h> 

void main()  {
	
	int start = 4;
	int end = 23;
	
	//using  while loop
	int sum = 0;
	while(start<=end)  {

	    sum = sum + start;
		start++;
			
	}
	printf("The sum is %d\n", sum);
	
	//using for loop
	int sum2 = 0;
	for(int i=4; i<=23; i++)  {
		sum2 = sum2 + i;
	}
	printf("The sum is %d", sum2);
}