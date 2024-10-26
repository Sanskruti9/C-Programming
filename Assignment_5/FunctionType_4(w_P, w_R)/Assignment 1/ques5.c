#include<stdio.h>  

double employeeSalary(double);

void main()  {
	
	double basic = 6000;
	double totalSal = employeeSalary(basic);
	printf("Total Salary is %lf", totalSal);	
	
}
double employeeSalary(double basic)  {
	
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