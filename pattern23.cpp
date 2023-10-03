#include <stdio.h>
int main(){
	int row;
	int col;
	printf("Enter number of rows : ");
	scanf("%d",&row);
	printf("Enter number of columns : ");
	scanf("%d",&col);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(j==0 and i%2==1) printf("%d",i+2);
			else if(j==col-1 and i%2==0) printf("%d",i+2);
			else printf("%d",i+1);
		}
		printf("\n");
	}
	return 0;
}
