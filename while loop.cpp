#include <stdio.h>
int main (){
	int start ,stop , sum =0 ;
	int i = start  ;
	printf("The start is:");
	scanf("%d" , &start);
	printf("The stop is:");
	scanf("%d" ,&stop);
	while (i<stop){
		printf("%d\n" ,i);
		i++;
		sum +=i;
	}
	printf("the sum is :%d " ,sum);
	return 0;
}