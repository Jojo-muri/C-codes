// for loop where user should input start and end
/*
NAME: GEORGE WAWERU MURIUKI
REG NO :CT101\G\23698\24
DATE:5\10\2024
*/
#include<stdio.h>
int main (){
	int i , sum = 0  , start , stop;
		printf("the start is:");
		scanf("%d" ,&start);
		printf("the end is:");
		scanf("%d" ,&stop);
		for(i=start ; i<=stop;i++){
		printf("%d\n", i);
		sum=sum +i;
		}
		printf("the sum is : %d\n" , sum);
	return 0;
}