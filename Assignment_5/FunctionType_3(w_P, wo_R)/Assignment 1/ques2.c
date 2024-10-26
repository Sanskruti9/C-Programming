#include<stdio.h> 
 
void Rectangle(float, float);
void Circle(float);

void main()  {
	
	char shape;
	printf("Enter your choice: ");
	scanf("%c", &shape);
	
	float l = 18.5;
	float w = 15.5; 
	float r = 14.3;
	
	if(shape=='R')  {
		Rectangle(l, w);
	}
	else if(shape=='C')  {
		Circle(r);
	}
	else {
		printf("Invalid choice");
	}
}

void Rectangle(float l, float w)   {
	
	float area = l * w;
	printf("Area of a rectangle is %.2f\n", area);
		
	float perimeter = 2*(l+w);
	printf("Perimeter of a rectangle is %.2f\n", perimeter);
	
}

void Circle(float r)    {
	
	float area = 3.14 * r * r;
	printf("Area of a circle is %.2f\n", area);
		
		
	float perimeter = 2 * 3.14 * r;
	printf("Perimeter of a circle is %.2f\n", perimeter);

}