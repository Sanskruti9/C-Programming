#include<stdio.h>  

//func declaration
float tempConverter(float);

void main()  {
	//func call
	float ans = tempConverter(7);	
	
	printf("Temperature in F = %f", ans);
	
}

//func definition
float tempConverter(float temp_C)  {

	float temp_F;
	temp_F = (1.8 * temp_C) + 32;
	
	return temp_F;
}