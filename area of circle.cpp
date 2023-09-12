#include <stdio.h>
#include <math.h>
int main(){
	int radius;
	printf("Enter the radius of the circle : ");
	scanf("%d",&radius);
	float area=3.14*pow(radius,2);
	printf("Area of the circle = %f",area);
}
