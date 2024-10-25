#include<stdio.h>  

int evenOdd()  {
	int num = 24;
	
	if(num%2 == 0) 
	    return 1; 
	else 
	    return 0;
}

double basicSal()  {
	
	double basic = 6000;
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
	
	if(choice==1)  {
		int res = evenOdd();
		
		if(res==1)   
		   printf("Even Number");
		else 
		   printf("Odd Number"); 
	}
	else if(choice==2)  {
		printf("Total Salary is %lf", basicSal());
	}
	else {
		printf("Invalid choice");
	}	
	
	
	
}

