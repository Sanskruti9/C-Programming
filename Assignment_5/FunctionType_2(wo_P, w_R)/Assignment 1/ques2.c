#include<stdio.h> 
 
float areaRectangle();
float periRectangle();
float areaCircle();
float periCircle();

void main()  {
	
	char shape;
	printf("Enter your choice: ");
	scanf("%c", &shape);
	
	if(shape=='R')  {
		float area = areaRectangle();
		float perimeter = periRectangle();
		printf("Area of a rectangle is %.2f\n", area);
		printf("Perimeter of a rectangle is %.2f\n", perimeter);
	}
	else if(shape=='C')  {
		float area = areaCircle();
		float perimeter = periCircle();
		printf("Area of a circle is %.2f\n", area);	
		printf("Perimeter of a circle is %.2f\n", perimeter);
	}
	else {
		printf("Invalid choice");
	}
	
}
float areaRectangle()  {
	float l = 18.5;
	float w = 15.5; 

	float area = l * w;
	return area;	
	
}
float periRectangle() {
	float l = 18.5;
	float w = 15.5; 
	float perimeter = 2*(l+w);
	return perimeter;
	
}
float areaCircle() {

    float r = 14.3;
	float area = 3.14 * r * r;
	return area;
	
	
}
float periCircle() {
	
	float r = 14.3;
	float perimeter = 2 * 3.14 * r;
	return perimeter;
	
}
