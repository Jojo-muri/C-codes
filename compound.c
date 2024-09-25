//program to find compound intrest
/*
name : George Waweru
Adm :CT101/G/23698/24
Date :25/9/2024
*/
#include<stdio.h>
int main () {
	float Principal = 25000 ; 
	float Rate = 5 ;
	float Time = 4 ;
	float Amount = Principal * (pow((1 + Rate/100) , Time)) ;
	float Compound_intrest = Amount - Principal ;
	printf(" the compound is : %.2lf " , Compound_intrest) ;
	return 0 ;
}