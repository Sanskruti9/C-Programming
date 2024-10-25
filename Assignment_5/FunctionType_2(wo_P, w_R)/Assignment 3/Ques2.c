#include<stdio.h> 

void table()  {
	
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	//using while loop
	int i=1;
	while(i<=10)  {
		printf("%d * %d = %d\n", n, i, n*i);
		i++;
	}
	
	/*
	printf("\n");
	
	//using for loop
	for(i=1; i<=10; i++)  {
		printf("%d * %d = %d\n", n, i, n*i);
	}
	*/
}
void main()  {
	
	table();
}