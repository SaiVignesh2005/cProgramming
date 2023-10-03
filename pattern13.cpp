#include <stdio.h>
int main(){
	int n;
	printf("Enter the size of the pattern : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j1=0;j1<i+1;j1++){
			printf("* ");			
		}
		for(int s1=0;s1<n-i-1;s1++){
			printf("  ");
		}
		for(int s2=0;s2<n-i-1;s2++){
			printf("  ");
		}
		for(int j2=0;j2<i+1;j2++){
			printf("* ");
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j1=0;j1<n-i;j1++){
			printf("* ");			
		}
		for(int s1=0;s1<i;s1++){
			printf("  ");
		}
		for(int s2=0;s2<i;s2++){
			printf("  ");
		}
		for(int j2=0;j2<n-i;j2++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
