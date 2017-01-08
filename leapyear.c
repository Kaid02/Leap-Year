/*
Name : Kabir Shrestha
lab No. : 26
Program : Write a C program to check whether year is leap year or not using 
 		  conditional ternory operation.
Date : 2017-01-09
*/

#include<stdio.h>
#include<conio.h>
	int main()
		{
			int year;
			
			printf("Enter the year : ");
			scanf("%d",&year);
			
			if(year%4==0){
				
			
			printf("%d is leap year",year);
			}
			else if(year%100==0){
				
			
			printf("%d is not leap year",year);
			}
			else if(year%400==0){
				
			
			printf("%d is leap year",year);
			}
			else{
				
			
			printf("%d is not leap year",year);
			}
			getch();
		
	} 		  