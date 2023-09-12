#include <stdio.h>
int main(){
	int kilometer;
	printf("Enter the kilometer : ");
	scanf("%d",&kilometer);
	printf("\nMeter : %d",kilometer*1000);
	printf("\nCentimeter : %d",kilometer*100000);
	printf("\nMillimeter : %d",kilometer*1000000);
	return 0;
}
