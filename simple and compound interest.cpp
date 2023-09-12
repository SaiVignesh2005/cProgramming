#include <stdio.h>
#include <math.h>
int main(){
	int p,n;
	float r;
	printf("Enter the principal amount : ");
	scanf("%d",&p);
	printf("Enter the tenure in years : ");
	scanf("%d",&n);
	printf("Enter the rate of interest : ");
	scanf("%f",&r);
	float simple=p*n*r/100;
	float compound=p*pow((1+r/100),n)-p;
	printf("Simple interest : %f",simple);
	printf("\nCompound interest : %f",compound);
	return 0;
}
