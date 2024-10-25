#include<stdio.h> 

void palindrome()  {
	int num = 12321;
	int rev = 0;
	int rem;
	int org = num;
	
	while(num>0)  {
		rem = num%10;
		rev = (rev*10)+rem;
		num = num/10;
	}
	if(rev==org)  
	    printf("%d is a palindrome number", org);
	else  
	     printf("%d is not palindrome number", org);
}
void main()    {
	
	palindrome();
	
}