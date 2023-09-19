#include <stdio.h>
int main(){
	printf("Enter the number : ");
	int n;
	scanf("%d",&n);
	if(n==1) printf("%d",0);
	else if(n==2) printf("%d",1);
	int first=0;
	int second=1;
	int fibo=0;
	for(int i=1;i<=n-1;i++){
		fibo=first+second;
		second=first;
		first=fibo;
	}
	printf("%d",fibo);
	
	
}
	
