#include <stdio.h>
int main(){
	printf("Enter the length of string : ");
	int n;
	scanf("%d",&n);
	char st[n+2];
	printf("Enter the string : ");
	scanf("%s",st);
	int pos;
	printf("Enter the position : ");
	scanf("%d",&pos);
	char ch;
	printf("Enter character to insert : ");
	scanf("%c",&ch);
	for(int i=n;i>=pos;i--){
		st[i]=st[i-1];
	}
	st[pos]=ch;
	return 0;
}
