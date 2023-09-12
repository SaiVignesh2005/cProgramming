#include <stdio.h>
int main(){
	float m1,m2,m3,m4,m5;
	printf("Enter the mark in 5 subjects : ");
	scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
	float percentage=(m1+m2+m3+m4+m5)/5;
	printf("Percentage = %f%%",percentage);
	return 0;
}
