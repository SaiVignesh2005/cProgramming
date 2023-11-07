#include <stdio.h>
int main(){
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	int k=1,c=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			printf("%d",1);
		}
		for(int j=0;j<=i;j++){
			printf("%d",c);
		}
		c++;
		printf("\n");
	}
	return 0;
}
