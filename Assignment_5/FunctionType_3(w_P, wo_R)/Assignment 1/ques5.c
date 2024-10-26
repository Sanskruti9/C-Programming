#include<stdio.h>  

void employeeSalary(double);

void main()  {
	
	employeeSalary(6000);	
	
}
void employeeSalary(double basic)  {
	 
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