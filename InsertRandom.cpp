#include <stdio.h>
int main(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int array[n+1];
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
	int data;
	printf("Enter the data to be inserted : ");
	scanf("%d",&data);
	int pos;
	printf("Enter the position to be inserted : ");
	scanf("%d",&pos);
	printf("\n");
	for(int i=n+1;i>pos;i--){
		array[i]=array[i-1];
	}
	array[pos]=data;
	printf("modified array : ");
	for(int i=0;i<n+1;i++){
		printf("%d ",array[i]);
	}
	return 0;
}

