#include<stdio.h>

void print_primeNo(int start, int end)  {

	for(int i=start; i<=end; i++)  {
		int j;
		for(j=2; j<=i/2; j++)  {
    	  if(i%j==0)  {
    		  break;
		  }	
	    }	
	    if(j==(i/2)+1)  
	        printf("%d \n", i);
	}
}
void main()  {
	
	print_primeNo(1, 100);
	   
}