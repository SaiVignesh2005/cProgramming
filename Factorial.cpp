#include <stdio.h>
int main(){
	printf("Enter the number : ");
	int N;
	scanf("%d",&N);
	int fact=1;
	for(int i=1;i<=N;i++){
		fact*=i;
	}
	printf("The factorial of %d = %d",N,fact);
}
