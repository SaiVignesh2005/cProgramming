#include <stdio.h>
int main(){
	int n;
	int start;
	printf("Enter the starting number : ");
	scanf("%d",&start);
	printf("Enter the size of the pattern : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("%d ",i+start);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("%d ",n+start-i-1);
		}
		printf("\n");
	}
	return 0;
}
