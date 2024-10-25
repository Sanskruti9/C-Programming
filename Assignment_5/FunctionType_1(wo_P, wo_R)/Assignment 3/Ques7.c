#include<stdio.h> 

void factNum()  {
	
	//using while loop
	  int num = 5;
	  int i = 1; 
	  int factorial = 1;
	  while(i<=num) {
	  	factorial = factorial * i;
	  	i++;
	  }
	  printf("%d", factorial);
	  
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
	  factNum();	  
}