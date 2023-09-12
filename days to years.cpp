#include <stdio.h>
int main(){
	float days;
	printf("Enter the number of days : ");
	scanf("%f",&days);
	float years=days/365.25;
	printf("Number of years in %f days = %f",days,years);
	return 0;
}
