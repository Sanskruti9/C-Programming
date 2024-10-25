#include<stdio.h>  

void employeeSalary();

void main()  {
	
	employeeSalary();	
	
}
void employeeSalary()  {
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