#include<stdio.h> 

void primeNo(int num)  {
    /*
	int i = 2;
	int count = 0;
	
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
	*/
	
	//using for loop
	int i=2;
    for(i=2; i<=num/2; i++)  {
    	if(num%i==0)  {
    		break;
		}	
	}	
	if(i==(num/2)+1)  printf("%d is a prime number\n", num);
	else     printf("%d is not prime number\n", num);
	
}
void main()  {
	
	primeNo(97);
}