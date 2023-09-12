#include <stdio.h>
int main(){
	int a,b;
	printf("Enter the two numbers to swap : ");
	scanf("%d %d",&a,&b);
	printf("\n A : %d",a);
	printf("\n B : %d",b);
	int temp=a;
	a=b;
	b=temp;
	printf("\n A : %d",a);
	printf("\n B : %d",b);
	return 0;	
}
