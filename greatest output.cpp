#include <stdio.h>
int main(){
	int t1,t2,t3;
	printf("Enter 3 techniques to compare : ");
	scanf("%d %d %d",&t1,&t2,&t3);
	(t1>t2&&t1>t3)?printf("\n%d has the greatest output",t1):((t2>t3)?printf("\n%d has the greatest output",t2):printf("\n%d has the greatest output",t3));
	return 0;
}
