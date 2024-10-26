#include<stdio.h>  

int evenOdd(int num)  {
	
	if(num%2 == 0) 
	    return 1; 
	else 
	    return 0;
}

double basicSal(double basic)  {
	
	double totalSalary, DA, TA, HRA;
	if(basic<=5000)  {
		DA = 0.10 * basic;
		TA = 0.20 * basic;
		HRA = 0.25 * basic;
	}
	else {
		DA = 0.15 * basic;
		TA = 0.25 * basic;
		HRA = 0.30 * basic;
    }
	totalSalary = basic + DA + TA + HRA;
	
	return totalSalary;
}  

void main()  {
	
	int choice;
	printf("Enter your choice 1.Even Odd or 2.Basic Salary: ");
	scanf("%d", &choice);
	
	int num= 24;
	double basic = 6000;
	
	if(choice==1)  {
		int res = evenOdd(num);
		
		if(res==1)   
		   printf("%d is Even Number", num);
		else 
		   printf("%d is Odd Number", num); 
	}
	else if(choice==2)  {
		printf("Total Salary is %lf", basicSal(basic));
	}
	else {
		printf("Invalid choice");
	}	
	
	
	
}
