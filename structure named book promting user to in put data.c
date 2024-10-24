//book structure prompting user to in put data
/*
Name:George Waweru
Reg No:CT101\G\23698\24
*/
#include<stdio.h>
#include<string.h>
struct book{
	char title[30];
	char author[30];
	int publication_year;
	char ISBN[13];
	float price;
	
}b1;

int main(){
	//declare values
	printf("enter book title:");
	scanf("%s",&b1.title);
	printf("enter author name:");
	scanf("%s",&b1.author);
	printf("enter publication year:");
	scanf("%d",&b1.publication_year);
	printf("enter ISBN:");
	scanf("%s",&b1.ISBN);
	printf("enter price:");
	scanf("%f",&b1.price);
	//print values
	printf("\n\nBook Title:%s\n",b1.title);
	printf("Author:%s\n",b1.author);
	printf("Publication Year:%d\n",b1.publication_year);
	printf("ISBN:%s\n",b1.ISBN);
	printf("Price:%.2f\n",b1.price);
	return 0;
}