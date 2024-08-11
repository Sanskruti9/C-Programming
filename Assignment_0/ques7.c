// Find total length of wire required for n fences around rectangular box horizontally.

#include<stdio.h>  

void main()  {
	
	int l = 20;
	int w = 30;
	int n = 15;
	float perimeter = (l+w)*2;
	
	float total_wire = n * perimeter;
	

	printf("Total length of wire is %f", total_wire);
}