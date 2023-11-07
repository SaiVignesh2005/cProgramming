#include <stdio.h>
int main(){
	printf("Enter the length of string : ");
	int n;
	scanf("%d",&n);
	char st[n+1];
	printf("Enter the string : ");
	scanf("%s",&st);
	for(int i=0,j=n-1;i<=j;i++,j--){
		char ch=st[i];
		st[i]=st[j];
		st[j]=ch;
	}
	printf("%s",st);
	return 0;
}
