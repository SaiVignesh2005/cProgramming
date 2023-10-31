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
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(array[j]>array[j+1]){
				int x=array[j+1];
				array[j+1]=array[j];
				array[j]=x;	
			}
		}
	}
	int target;
	printf("Enter the target sum : ");
	scanf("%d",&target);
	for(int k=0;k<n;k++){
		for(int i=k+1,j=n-1;i<j;){
		if(array[i]+array[j]+array[k]==target){
			printf("%d, %d and %d",array[i],array[j],array[k]);
			break;
		}
		else if(array[i]+array[j]>target) j--;
		else i++;
	}
	}
	return 0;
}
