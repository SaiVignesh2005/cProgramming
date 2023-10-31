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
	int ans1[n],ans2[n];
	int k=0,l=0;
	for(int i=0;i<n;i++){
		if(array[i]%2==0) ans1[k++]=array[i];
		else ans2[l++]=array[i];
	}
	for(int i=0;i<k;i++){
		printf("%d ",ans1[i]);
	}
	printf("\n");
	for(int i=0;i<l;i++){
		printf("%d ",ans2[i]);
	}
}
