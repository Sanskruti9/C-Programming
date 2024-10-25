#include<stdio.h>  

//func declaration
float tempConverter();

void main()  {
	//func call
	float ans = tempConverter();	
    printf("Temperature in F: %.2f", ans);
}

//func definition
float tempConverter()  {
	
	float temp_C = 7;
	
	float temp_F = (1.8 * temp_C) + 32;
	
	return temp_F;
}