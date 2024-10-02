//program to calculate fine rate in a library
/*
NAME :GEORGE WAWERU MURIUKI
REG NO :CT101/G/23698/24
DATE : 2/10/2024
*/
#include<stdio.h>
int main (){
	int bookID ,duedate , returndate ,daysoverdue , finerate ,fineAmount ;
	//input bookID , duedate and returndate
	printf("Enter BookID:");
	scanf("%d" ,&bookID);
	printf("Enter Due Date:");
	scanf("%d" ,&duedate);
	printf("Enter Return Date:");
	scanf("%d" ,&returndate );
	daysoverdue = returndate - duedate;
	if(daysoverdue<=7){
		finerate = 20;
	}else if(daysoverdue<=14){
		finerate = 50;
	}else {
		finerate = 100;
	}
	fineAmount = daysoverdue * finerate ;
	printf("\nBook ID:%d\n" ,bookID);
	printf("Due Date:%d\n", duedate);
	printf("Return Date:%d\n", returndate);
	printf("Days Overdue:%d\n" , daysoverdue);
	printf("Fine Rate:Ksh.%d per day\n" , finerate);
	printf("Fine Amount:Ksh.%d\n" , fineAmount);
	return 0; 
}