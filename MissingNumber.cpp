#include <stdio.h>
int main(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int array[n];
	printf("Enter the data : ");
	for(int i=0;i<n-1;i++){
		int data;
		scanf("%d",&data);
		array[i]=data;
	}
	int sum=n*(n+1)/2;
	for(int i=0;i<n;i++){
		sum=sum-array[i];
	}
	printf("Missing number : %d",sum);
	return 0;
}
