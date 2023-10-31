#include <stdio.h>
int main(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int array1[n][n];
	int array2[n][n];
	int ans[n][n];
	printf("Enter the data : ");
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			int data;
			scanf("%d",&data);
			array1[j][i]=data;
		}
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			int data;
			scanf("%d",&data);
			array2[j][i]=data;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int sum=0;
			for(int k=0;k<n;k++){
				sum+=array1[i][k]*array2[k][j];
			}
			ans[i][j]=sum;	
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
