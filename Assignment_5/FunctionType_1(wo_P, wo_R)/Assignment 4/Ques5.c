#include<stdio.h>

void printFibonacci() {
	 int n = 10;
	 
	 int a = 0, b = 1, c;
	 
	 printf("%d %d ", a, b);
	 
         for(int i=2; i<=n; i++)  {
	     int c = a + b;
     	     a = b;
     	     b = c;
     	
     	     printf("%d ", c);
	 }
	 
}
void main()  {
	 
	 printFibonacci();	   
}