#include<stdio.h> 

void factNum(int num)  {
	
	//using while loop
	  
	  int i = 1; 
	  int factorial = 1;
	  while(i<=num) {
	  	factorial = factorial * i;
	  	i++;
	  }
	  printf("The factorial of %d is %d", num, factorial);
	  
	  /*
	  printf("\n");
	  
	  //using for loop
	  int fact = 1;
	  for(int i=1; i<=num; i++)  {
	  	fact = fact*i;
	  }
	  printf("%d", fact);
	  */
}
void main()  {
	  factNum(5);	  
}