#include<stdio.h> 
 
void Rectangle();
void Circle();

void main()  {
	
	char shape;
	printf("Enter your choice: ");
	scanf("%c", &shape);
	
	if(shape=='R')  {
		Rectangle();
	}
	else if(shape=='C')  {
		Circle();
	}
	else {
		printf("Invalid choice");
	}
}

void Rectangle()   {
	
	float l = 18.5;
	float w = 15.5; 
	float area, perimeter;
	

	area = l * w;
	printf("Area of a rectangle is %.2f\n", area);
		
	perimeter = 2*(l+w);
	printf("Perimeter of a rectangle is %.2f\n", perimeter);
	
	
}

void Circle()    {
	
	float r = 14.3;
	float area, perimeter;
	
	area = 3.14 * r * r;
	printf("Area of a circle is %.2f\n", area);
		
		
	perimeter = 2 * 3.14 * r;
	printf("Perimeter of a circle is %.2f\n", perimeter);

}