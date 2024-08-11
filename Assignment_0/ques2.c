//  Write a program to calculate the percentage of student based on marks of any 5 Subjects.

#include<stdio.h>  

void main()  {
	
	int s1 = 50, s2 = 30, s3 = 80, s4 = 90, s5 = 70;
	
	float marks_obtained = s1 + s2 + s3 + s4 + s5;
	
	float percentage = (marks_obtained/500) * 100;
	

	printf("Percentage of a student is %f", percentage);
}