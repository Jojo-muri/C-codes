//program to calculate electricity bill
/*
Name: George waweru
Reg No:CT101\G\23698\2024
Date:10.10.2024
*/
#include<stdio.h>
int main (){
	int customerID , unitsconsumed ;
	char customername[20];
	float chargesperunit , totalbill ,surcharge ,amounttopay;
	printf("Enter the customer ID:");
	scanf("%d", &customerID);
	printf("Enter the customer name:");
	scanf("%s", &customername);
	printf("Unit consumed:");
	scanf("%d", &unitsconsumed);
	if(unitsconsumed<=199){
	chargesperunit = 1.20;
	}else if (unitsconsumed<400){
	chargesperunit = 1.50;
	}else if(unitsconsumed<600){
	chargesperunit = 1.80;
	}else{
	chargesperunit = 2.00;
	}
totalbill= unitsconsumed*chargesperunit;
if(totalbill>400){
surcharge = 0.15*totalbill;
totalbill+= surcharge;
}
if(totalbill<100){
totalbill=100;
}
amounttopay = totalbill;
printf("\n customerID:%d\n",customerID);
printf("Custumer Name:%s\n",customername);
printf("Units Consumed:%d\n", unitsconsumed);
printf("Charges per unit:%.2f\n", chargesperunit);
printf("Amount To Pay:%.2f\n", amounttopay);

return 0;	
}
