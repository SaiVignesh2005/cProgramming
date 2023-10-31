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
	for(int i=0;i<n;i++){
		int flag=1;
		for(int j=i+1;j<n;j++){
			if(array[j]==array[i]){
				flag=0;
				break;
			}
		}
		if(flag==1){
			printf("%d",array[i]);
			break;
		}
	}
	return 0;
}
