#include <stdio.h>
int main(){
	int n;
	printf("Enter the size of the pattern : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int s=0;s<i;s++){
			printf(" ");
		}
		for(int j=0;j<2*(n-i)-1;j++){
			if(j==0||j==2*(n-i-1))printf("*");
			else printf("-");
		}
		printf("\n");
	}
	return 0;
}
