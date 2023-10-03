#include <stdio.h>
int main(){
	int n,ans=65;
	printf("Enter the size of the pattern : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("%c",ans+i);
		}
		printf("\n");
	}
	return 0;
}
