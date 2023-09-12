#include <stdio.h>
int main(){
	float basic_pay;
	int region;
	printf("Enter the basic pay : ");
	scanf("%f",&basic_pay);
	printf("Enter the region 1-metro,2-tier1,3-tier-2,4-others : ");
	scanf("%d",&region);
	float salary;
	if(region==1)salary=basic_pay*1.83;
	else if(region==2)salary=basic_pay*1.72;
	else if(region==3)salary=basic_pay*1.69;
	else salary=basic_pay*1.5;
	printf("Total salary = %f",salary);	
	return 0;
}
