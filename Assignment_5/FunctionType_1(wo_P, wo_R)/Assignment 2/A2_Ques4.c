#include<stdio.h>  

void evenOdd()  {
	int num = 24;
	
	if(num%2 == 0)  
		printf("%d is Even Number", num);
	else 
		printf("%d is Odd Number", num);
}

void basicSal()  {
	
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
	printf("Total Salary is %lf", totalSalary);
	
}  

void main()  {
	
	//Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice,then based on that perform the desired operations.
	int choice;
	printf("Enter your choice 1.Even Odd or 2.Basic Salary: ");
	scanf("%d", &choice);
	
	if(choice==1)  {
		evenOdd();
	}
	else if(choice==2)  {
		basicSal();
	}
	else {
		printf("Invalid choice");
	}	
	
	
	
}

