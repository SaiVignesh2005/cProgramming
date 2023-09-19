#include <stdio.h>
int main(){
	printf("Enter the number : ");
	int N;
	scanf("%d",&N);
	int length=0;
	int d=N;
	for(int i=0;i<=N;i++){
		length++;
		N/=10;
	}
	printf("Length of %d = %d",d,length);
}
