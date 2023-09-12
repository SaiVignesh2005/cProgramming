#include <stdio.h>
#include <math.h>
int main(){
	int number;
	printf("Enter the number to find square root : ");
	scanf("%d",&number);
	float root=sqrt(number);
	printf("Square root of %d : %f",number,root);
	return 0;
}
