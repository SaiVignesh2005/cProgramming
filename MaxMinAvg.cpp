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
	int sum=0,max=array[0],min=array[0];
	for(int i=0;i<n;i++){
		if(array[i]<min) min=array[i];
		if(array[i]>max) max=array[i];
		sum+=array[i];
	}
	printf("Minimum : %d\n",min);
	printf("Maximum : %d\n",max);
	printf("Average : %d\n",sum/n);
	return 0;
}
