#include <stdio.h>
int main(){
	int n;
	printf("Enter the size of the pattern : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int s=0;s<n-i-1;s++){
			printf("  ");
		}
		for(int j=n-i-1;j<n;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
