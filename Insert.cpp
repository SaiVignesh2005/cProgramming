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
	printf("\n");
	for(int i=0;i<n+1;i++){
		if(array[i]>data){
			for(int j=n;j>i;j--){
				array[j]=array[j-1];
			}
			array[i]=data;
			break;
		}
	}
	printf("modified array : ");
	for(int i=0;i<n+1;i++){
		printf("%d ",array[i]);
	}
	
	return 0;
}
