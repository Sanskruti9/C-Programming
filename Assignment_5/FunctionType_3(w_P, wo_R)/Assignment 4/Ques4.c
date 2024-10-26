#include<stdio.h>

void printStrongNo(int start, int end) {
	
	for(int i=start; i<=end; i++)  {
		int temp = i;
		int sum = 0;
		
		while(temp>0)  {
			int fact = 1;
			int rem = temp%10;
			for(int j=1; j<=rem; j++)  {
				fact = fact * j;
			}
			sum = sum + fact;
			temp = temp/10;
		}
		if(sum==i)  {
			printf("%d \n", i);
		}
	}
}
void main()  {
	
	printStrongNo(1, 200);
	   
}