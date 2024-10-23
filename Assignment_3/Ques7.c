#include<stdio.h> 

void main()  {
	  
	  //using while loop
	  int num = 5;
	  int i = 1; 
	  int factorial = 1;
	  while(i<=num) {
	  	factorial = factorial * i;
	  	i++;
	  }
	  printf("Factorial of %d is %d", num, factorial);
	  
	  printf("\n");
	  
	  //using for loop
	  int fact = 1;
	  for(int i=1; i<=num; i++)  {
	  	fact = fact*i;
	  }
	  printf("Factorial of %d is %d", num, fact);
}