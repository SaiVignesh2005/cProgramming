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
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(array[j]>array[j+1]){
				int x=array[j+1];
				array[j+1]=array[j];
				array[j]=x;	
			}
		}
	}
	int k;
	printf("Enter the value of k : ");
	scanf("%d",&k);
	printf("Kth smallest Element : %d\n",array[k-1]);
	printf("Kth largest Element : %d",array[n-k]);

	return 0;
}
