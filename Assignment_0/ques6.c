// Convert the time entered in hr , min and sec into seconds.

#include<stdio.h>  

void main()  {
	
	int hr = 7;
	int min = 12;
	int sec = 30;
	
	int total_sec = sec + (hr*3600) + (min*60);
	

	printf("Total seconds are %d", total_sec);
}