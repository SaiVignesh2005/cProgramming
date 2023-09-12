#include <stdio.h>
#include <math.h>
int main(){
	int number;
	printf("Enter the number to find cube : ");
	scanf("%d",&number);
	int cube_number=pow(number,3);
	printf("Cube of %d : %d",number,cube_number);
	return 0;
}
