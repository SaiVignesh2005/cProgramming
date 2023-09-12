#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter 3 integers to compare : ");
	scanf("%d %d %d",&a,&b,&c);
	(a>b&&a>c)?printf("\n%d is the greatest",a):((b>c)?printf("\n%d is the greatest",b):printf("\n%d is the greatest",c));
	return 0;
}
