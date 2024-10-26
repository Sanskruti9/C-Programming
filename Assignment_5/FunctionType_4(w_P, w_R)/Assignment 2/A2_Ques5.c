#include<stdio.h>  

double finalPrice(double price)  {
	
	double discount, finalPrice;
	
	char choice;
	printf("Are you student? : ");
	scanf("%c", &choice);
	scanf("%c", &choice);
	
	if(choice=='y') {
		if(price>500) {
			discount = 20.0;
		}
		else {
			discount = 10.0;
		}
		finalPrice = price - (price*discount/100);
	}
	else if(choice=='n')  {
		if(price>600) {
			discount = 15.0;
		}
		else {
			discount = 0;
		}
		finalPrice = price - (price*discount/100);
	}
	else {
		printf("Invalid data");
	}
    return finalPrice;
}
void main()  {
	
	double price;
	printf("Enter the price: ");
	scanf("%lf", &price);
	
	double res = finalPrice(price);
	printf("The final price is %lf", res);
   
}