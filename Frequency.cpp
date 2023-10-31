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
	int count=0;
	int data;
	printf("Enter the data to find frequency : ");
	scanf("%d",&data);
	for(int i=0;i<n;i++){
		if(array[i]==data) count++;
	}
	printf("Frequency of %d = %d",data,count);
	return 0;
}
	
