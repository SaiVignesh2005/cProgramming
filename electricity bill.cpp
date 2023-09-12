#include <stdio.h>
int main(){
	float units;
	printf("enter the number of units : ");
	scanf("%f",&units);
	float amount;
	if(units<100) amount=units*2;
	else if(units<300) amount=units*3;
	else if(units<500) amount=units*5;
	else if(units<1000) amount=units*7;
	else amount=units*10;
	printf("The total amount to be paid : %f",amount);
	
	return 0;
}
