//valiables and data types
/*
Author: George Waweru
Reg no :CT101/G/23698/24
Date :20/9/2024
*/
//preprocessor scanf() , printf()
#include<stdio.h>
int main () {
	//declaration and intinilization
	char a ;
	char name[] = {"george"} ;
	int age ;
	float salary ;
	double budget ;
	printf("enter your age :");
	scanf("%d",&age);
	printf("your age is%d\n", age);
	
	printf("Enter your salary:");
	scanf("%f" , &salary);
	printf("your salary is%f\n", salary);
	
	printf("Enter your budget:");
	scanf("%lf" , budget);
	printf("your budget is %lf\n" , budget);
	
	printf("The character is %c\n", a);
	printf("Your name is %s\n", name);
	printf("Your age is%d\n", age);
	printf("Your salary is%f\n", salary);
	printf("Your budget is%lf\n", budget);
	return 0;
}