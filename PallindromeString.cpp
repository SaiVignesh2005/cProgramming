#include <stdio.h>
int main(){
	printf("Enter the length of string : ");
	int n;
	scanf("%d",&n);
	char st[n+1];
	printf("Enter the string : ");
	scanf("%s",&st);
	int flag=1;
	for(int i=0,j=n-1;i<=j;i++,j--){
		if(st[i]!=st[j]){
			flag=0;
			break;
		}
	}
	if(flag) printf("Pallindrome");
	else printf("Not a pallindrome");
	return 0;
}
