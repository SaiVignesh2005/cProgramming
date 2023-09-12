#include <stdio.h>
int main(){
	int day;
	int m;
	int year;
	printf("Enter the day : ");
	scanf("%d",&day);
	printf("Enter the month : ");
	scanf("%d",&m);
	printf("Enter the year : ");
	scanf("%d",&year);
	if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&day!=31)day++;
	else if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&day==31){
		if(m==12){
			year++;
			day=1;
			m=1;
		}
		else{
			day=1;
			m++;
		}		
	}
	else if((m==4||m==6||m==9||m==11)&&day!=30) day++;
	else if((m==4||m==6||m==9||m==11)&&day==30){
		day=1;
		m++;
	}
	else{
		if((year%4==0&&(year%100!=0||year%400==0))&&day!=29) day++;
		else if((year%4==0&&(year%100!=0||year%400==0))&&day==29){
			day=1;
			m++;
		}
		else if(day!=28) day++;
		else{
			day=1;
			m++;
		}
		}	
	printf("\nNext day : ");
	printf("\n %d : %d : %d",day,m,year);
	return 0;
}
