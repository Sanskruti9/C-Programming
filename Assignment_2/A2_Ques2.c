#include<stdio.h>  

void main()  {
	
	int a = 25, b = 57, c = 45;
	
	//Using nested-if
	if(a>b)  {
		if(a>c)  
			printf("%d is greater number\n", a);
		else 
			printf("%d is greater number\n", c);		   
	}
	else {
		if(b>c)  
			printf("%d is greater number\n", b);
		else 
			printf("%d is greater number\n", c);
	}
	
	/*
	//using ternary operator
	int d = a>b ? a>c ? a : c : b>c ? b : c;
	printf("%d is greater\n", d );
	
	int d1 = a>b && a>c ? a : b>a && b>c ? b : c;
	printf("%d is greater\n", d1 );
	
	int d2 = a>b && a>c ? a : b>c ? b : c;
	printf("%d is greater\n", d2 );
	
	int max = a>b ? a : b;
	max = max>c ? max : c;
	printf("%d is greater\n", max);
	
	*/
}