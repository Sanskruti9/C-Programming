#include<stdio.h> 
 
double finalPrice(double);

void main()  {
	
	double price = 5000;
	
	double actualPrice = finalPrice(price);
	printf("Final price is %lf", actualPrice);
}

double finalPrice(double price)  {
	 
	double discount, actualPrice;
	
	if(price>=5000) {
		discount = 25.0;
	}
	else if(price>=4000)  {
		discount = 20.0;
	} 
	else if(price>=2000) {
		discount = 10.0;
	}
	else {
		discount = 5.0;
	}
	actualPrice = price - (price * (discount/100));
	
	return actualPrice;
}