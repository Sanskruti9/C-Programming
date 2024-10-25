#include<stdio.h>

void printPerfectNo()  {
	
	int start = 1, end = 500;
	
	for(int i=start; i<=end; i++)   {
		int sum = 0;
		for(int j=1; j<=i/2; j++)  {
		   if(i%j==0)  {
		 	  sum = sum + j;
		 	  
		   }
	    }
	    if(sum==i)  {
		    printf("%d is a perfect number\n", i);
	    }
		
	}
}
void main()  {
	
	printPerfectNo();

}