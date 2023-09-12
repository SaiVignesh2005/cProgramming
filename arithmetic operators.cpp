#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	printf("Addition : ");
	int c=a+b;
	printf("%d",c);
	printf("\nsubtraction : ");
	int d=a-b;
	printf("%d",d);
	printf("\nmultiplication : ");
	int e=a*b;
	printf("%d",e);
	printf("\ndivision : ");
	int f=a/b;
	printf("%d",f);
	return 0;
}
