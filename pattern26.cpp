#include <stdio.h>
int main(){
	int n,ans=69;
	printf("Enter the size of the pattern : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			printf("%c ",ans-i+j);
		}
		printf("\n");
	}
	return 0;
}
