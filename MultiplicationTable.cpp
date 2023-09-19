#include <stdio.h>
int main(){
	printf("Enter the number : ");
	int N;
	scanf("%d",&N);
	for(int i=1;i<=10;i++){
		printf("%d x %d = %d\n",N,i,N*i);
	}
}
