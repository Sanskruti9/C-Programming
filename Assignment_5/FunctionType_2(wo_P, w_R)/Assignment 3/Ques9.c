#include<stdio.h> 

int palindrome()  {
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
	    return 1;    
	else  
	    return 0;   
}
void main()    {
	int num = 12321;
	int res = palindrome();
	if(res==1)  
	   printf("%d is a palindrome number", num);
	else 
	   printf("%d is not palindrome number", num);
	
}