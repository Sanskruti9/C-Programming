#include<stdio.h>

void main()  {
	
	int start = 1, end = 100;

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