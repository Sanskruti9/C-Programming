#include<stdio.h> 
 
void finalPrice();

void main()  {
	finalPrice();
}
void finalPrice()  {
	
	double price = 5000; 
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
	printf("Final price is %lf", actualPrice);
	
	
}