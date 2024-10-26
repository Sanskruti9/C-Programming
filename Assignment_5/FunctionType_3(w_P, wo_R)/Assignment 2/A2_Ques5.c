#include<stdio.h>  

void finalPrice(double price)  {
	
	char choice;
	printf("Are you student? : ");
	scanf("%c", &choice);
	scanf("%c", &choice);
	
	double discount, finalPrice;
	
	if(choice=='y') {
		if(price>500) {
			discount = 20.0;
		}
		else {
			discount = 10.0;
		}
		finalPrice = price - (price*discount/100);
		printf("The final price is %lf", finalPrice);
	}
	else if(choice=='n')  {
		if(price>600) {
			discount = 15.0;
		}
		else {
			discount = 0;
		}
		finalPrice = price - (price*discount/100);
		printf("The final price is %lf", finalPrice);
	}
	else {
		printf("Invalid data");
	}
    
}
void main()  {
	
	double price; 
	printf("Enter the price: ");
	scanf("%lf", &price);

	finalPrice(price);
   
}