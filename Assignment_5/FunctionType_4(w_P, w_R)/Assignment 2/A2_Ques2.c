#include<stdio.h>  

int greaterNum(int,int,int);

void main()  {
	
	int a = 25, b = 57, c = 45;
	int res = greaterNum(a, b, c);
	if(res==a)
	    printf("%d is greater number\n", a);
	else if(res==b)
	    printf("%d is greater number\n", b);
	else 
	    printf("%d is greater number\n", c);
}
int greaterNum(int a, int b, int c)  {
	
	//Using nested-if
	if(a>b)  {
		if(a>c)  
			return a;
		else 
			return c;		   
	}
	else {
		if(b>c)  
			return b;
		else 
			return c;
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