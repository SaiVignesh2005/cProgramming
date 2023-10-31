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
	printf("Entered array : ");
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	for(int i=0,j=n-1;i<j;i++,j--){
		int x=array[i];
		array[i]=array[j];
		array[j]=x;
	}
	printf("Modified array : ");
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
