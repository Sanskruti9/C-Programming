#include<stdio.h>

void printPerfectNo(int start, int end)  {
	
	for(int i=start; i<=end; i++)   {
		int sum = 0;
		for(int j=1; j<=i/2; j++)  {
		   if(i%j==0)  {
		 	  sum = sum + j;
		 	  
		   }
	    }
	    if(sum==i)  {
		    printf("%d \n", i);
	    }
		
	}
}
void main()  {
	
	printPerfectNo(1, 500);

}