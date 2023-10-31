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
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(array[j]>array[j+1]){
				int x=array[j+1];
				array[j+1]=array[j];
				array[j]=x;	
			}
		}
	}
	for(int i=0;i+1<n;i++){
		if(array[i]==array[i+1]){
			while(array[i]==array[i+1]&&i+1<n){
				i++;
			}
			printf("%d ",array[i]);
		}
	}
	return 0;
}
