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
	for(int i=0;i+1<n;i+=2){
		int x=array[i];
		array[i]=array[i+1];
		array[i+1]=x;
	}
	printf("Modified array : ");
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}
