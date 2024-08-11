// If there are 20 students who like football, 30 students like badminton and 10 like both. 
//There are 20 who are not interested in any of the games. How many total number of students are there?

#include<stdio.h>  

void main()  {
	
	int football = 20;
	int badminton = 30;
	int both = 10;
	int not_interested = 20;
	
	int total = (football + badminton - both) + not_interested;
	

	printf("Total no. of students are %d", total);
}