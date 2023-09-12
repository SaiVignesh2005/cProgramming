#include <stdio.h>
int main(){
	int year;
	int m;
	printf("Enter the year : ");
	scanf("%d",&year);
	printf("Enter the month number : ");
	scanf("%d",&m);
	int days;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)days=31;
	else if(m==4||m==6||m==9||m==11)days=30;
	else{
		if(year%4==0&&(year%100!=0||year%400==0)) days=29;
		else days=28;
	}
	printf("Number of days : %d",days);
	return 0;
}
