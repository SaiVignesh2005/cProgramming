#include <stdio.h>
int main(){
	float a,b;
	printf("Enter the two numbers : ");
	scanf("%f %f",&a,&b);
	float c=a*b;
	int d=a*b;
	printf("\nFloat multiplication : %f",c);
	printf("\nInteger multiplication : %d",d);
	return 0;
}
