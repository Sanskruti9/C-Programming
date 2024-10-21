#include<stdio.h>  

void main()  {
	
	float length = 18.5;
	float width = 15.5; 
	float radius = 14.3;
	float area, perimeter;
	
	char shape = 'R';
	
	if(shape=='R')  {
		area = length * width;
		perimeter = 2*(length+width);
		printf("Area of a rectangle is %.2f\n", area);
		printf("Perimeter of a rectangle is %.2f\n", perimeter);
	}
	else if (shape=='C') {
		area = 3.14 * radius * radius;
		perimeter = 2 * 3.14 * radius;
		printf("Area of a circle is %.2f\n", area);
		printf("Perimeter of a circle is %.2f\n", perimeter);
	}
	else {
		printf("Invalid shape");
	}
	
}