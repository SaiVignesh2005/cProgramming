#include <stdio.h>
int main(){
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	if(year%4==0&&(year%100!=0||year%400==0))printf("\nThe entered year is a leap year");
	else printf("\nThe entered year is not a leap year");
	return 0;
}
