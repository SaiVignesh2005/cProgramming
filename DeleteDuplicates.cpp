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
	for(int i=0;i<n;i++){
		int data=array[i];
		for(int j=i+1;j<n;j++){
			if(array[j]==data){
			for(int k=j;k<n-1;k++){
				array[k]=array[k+1];
			}
			n--;
		}
		}
	}
	printf("Modified array : ");
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
