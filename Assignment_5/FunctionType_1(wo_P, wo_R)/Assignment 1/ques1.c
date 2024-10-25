#include<stdio.h>  

//func declaration
void tempConverter();

void main()  {
	//func call
	tempConverter();	
}

//func definition
void tempConverter()  {
	float temp_C = 7;
	float temp_F;
	
	temp_F = (1.8 * temp_C) + 32;
	printf("%.2f Celsius is equals to %.2f Fahrenheit", temp_C, temp_F);
}