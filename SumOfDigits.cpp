#include <stdio.h>
int main(){
	printf("Enter the number : ");
	int N;
	scanf("%d",&N);
	int sum=0;
	int d=N;
	for(int i=0;i<=N;i++){
		sum+=N%10;
		N/=10;
	}
	printf("sum of the digits of %d = %d",d,sum);
}
