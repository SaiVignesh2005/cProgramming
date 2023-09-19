#include <stdio.h>
int main(){
	printf("Enter the end point of the series : ");
	int N;
	scanf("%d",&N);
	int sum=N*(N+1)/2;
	printf("The sum of the first %d natural numbers = %d",N,sum);
}
