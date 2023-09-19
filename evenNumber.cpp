#include <stdio.h>
int main(){
	printf("Enter the end point of the series : ");
	int N;
	scanf("%d",&N);
	for(int i=2;i<=N;i+=2){
		printf("%d\n",i);
	}
	return 0;
}
