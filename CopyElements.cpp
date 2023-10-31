#include <stdio.h>
int main(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int array[n];
	printf("Enter the data : ");
	for(int i=0;i<n;i++){
		int data;
		scanf("%d",&data);
		array[i]=data;
	}
	int ans[n];
	for(int i=0;i<n;i++){
		ans[i]=array[i];
	}
	for(int i=0;i<n;i++){
		printf("%d ",ans[i]);
	}
}
