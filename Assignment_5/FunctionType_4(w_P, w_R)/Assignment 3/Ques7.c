#include<stdio.h> 

int factNum(int num)  {
	
	//using while loop
	  
	  int i = 1; 
	  int factorial = 1;
	  while(i<=num) {
	  	factorial = factorial * i;
	  	i++;
	  }
	  return factorial;
	  
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
	
	  int num;
	  printf("Enter the number: ");
	  scanf("%d", &num);
	  
	  printf("Factorial is %d", factNum(num));	  
}