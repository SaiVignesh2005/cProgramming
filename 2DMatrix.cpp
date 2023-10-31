#include <stdio.h>
int main(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int array[n][n];
	printf("Enter the data : ");
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			int data;
			scanf("%d",&data);
			array[j][i]=data;
		}
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			printf("%d ",array[j][i]);
		}
		printf("\n");
	}
	return 0;
}
