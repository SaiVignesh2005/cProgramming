#include <stdio.h>
int main(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int array1[n][n];
	int array2[n][n];
	int add[n][n];
	int sub[n][n];
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
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			add[j][i]=array1[j][i]+array2[j][i];
		}
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			sub[j][i]=array1[j][i]-array2[j][i];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",add[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",sub[i][j]);
		}
		printf("\n");
	}
	return 0;
}
