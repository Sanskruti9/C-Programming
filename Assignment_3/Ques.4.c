#include<stdio.h> 

void main()  {
	
	int num = 97;
	int count = 0;
	int i = 2;
	
	// using while loop
	while(i<=num/2)  {
		if(num%i==0)  {
			count++;
		}
		i++;
	}
	if(count==0)  {
		printf("%d is a prime number\n", num);
	}
	else {
		printf("%d is not prime number\n", num);
	}
	
	//using for loop
    for(i=2; i<=num/2; i++)  {
    	if(num%i==0)  {
    		break;
		}	
	}	
	if(i==(num/2)+1)  printf("%d is a prime number\n", num);
	else     printf("%d is not prime number\n", num);
	
}