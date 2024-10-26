#include<stdio.h> 
 
float areaRectangle(float, float);
float periRectangle(float, float);
float areaCircle(float);
float periCircle(float);

void main()  {
	
	char shape;
	printf("Enter your choice: ");
	scanf("%c", &shape);
	
	float l = 18.5;
	float w = 15.5; 
	float r = 14.3;
	
	if(shape=='R')  {
		float area = areaRectangle(l,w);
		float perimeter = periRectangle(l,w);
		printf("Area of a rectangle is %.2f\n", area);
		printf("Perimeter of a rectangle is %.2f\n", perimeter);
	}
	else if(shape=='C')  {
		float area = areaCircle(r);
		float perimeter = periCircle(r);
		printf("Area of a circle is %.2f\n", area);	
		printf("Perimeter of a circle is %.2f\n", perimeter);
	}
	else {
		printf("Invalid choice");
	}
	
}
float areaRectangle(float l, float w)  {

	float area = l * w;
	return area;	
}
float periRectangle(float l, float w) {
	 
	float perimeter = 2*(l+w);
	return perimeter;
}
float areaCircle(float r) {

	float area = 3.14 * r * r;
	return area;
}
float periCircle(float r) {
	
	float perimeter = 2 * 3.14 * r;
	return perimeter;
}