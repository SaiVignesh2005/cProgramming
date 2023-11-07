#include <stdio.h>
int main(){
	printf("Enter the length of string : ");
	int n;
	scanf("%d",&n);
	char st[n+1];
	printf("Enter the string : ");
	scanf("%s",&st);
	for(int i=0;i<n;i++){
		if(st[i]>=65&&st[i]<=90) st[i]+=32;
	}
	printf("Modified String : %s",st);
	return 0;
}
