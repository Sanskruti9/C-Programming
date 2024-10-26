#include<stdio.h> 

void num1To10(int start, int end)  {
	
	//using while loop
	  
	  
	  while(start<=end) {
	  	printf("%d ", start);
	  	start++;
	  }
	  
	  /*
	  printf("\n");
	  
	  //using for loop
	  for(i=1; i<=10; i++)  {
	  	printf("%d ", i);
	  }
	  */
}
void main()  {
	  
	  num1To10(1, 10);
	  
}