//Name 		: Singgih Febriana
//Date 		: October 11,2020
//Program 	: Calculate years, months, weeks, and days

#include<stdio.h>
#include<time.h>

main(){
	
	int years,month,weeks,days;
	printf("Insert the years ? \n");
	scanf("%d",&years);
	month=(years*12);
	weeks=(month*4);
	days=(weeks*7);
	sleep(5);
	printf("\nyears %d , %d months, %d weeks and %d days",years,month,weeks,days);
	
	
	
	
}
