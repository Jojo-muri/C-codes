//c structure named book
/*
Name:George Waweru
Reg No:CT101\G\23698\24
*/
#include <stdio.h>
#include <string.h>
struct book{
	char title[30];
	char author[30];
	int publication_year;
	char ISBN [13];
	float price;
	
}b1;

int main() {
	//declare values
	strcpy(b1.title,"introduction to c programming");
	strcpy(b1.author,"John Smith");
	b1.publication_year =2022;
	strcpy(b1.ISBN,"9780131103627");
	b1.price = 49.99;
	//print values
	printf("Title:%s\n",b1.title);
	printf("Author:%s\n",b1.author);
	printf("Publication year:%d\n",b1.publication_year);
	printf("ISBN:%s\n",b1.ISBN);
	printf("Price:%.2f\n",b1.price);
	return 0;
}