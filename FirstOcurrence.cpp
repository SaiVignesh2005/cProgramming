#include <stdio.h>
int main(){
	printf("Enter the length of string : ");
	int n;
	scanf("%d",&n);
	char st[n+1];
	printf("Enter the string : ");
	scanf("%s",&st);
	char ch;
	printf("Enter the character to find first ocurrence : ");
	scanf("%c",&ch);
	for(int i=0;i<n;i++){
		if(st[i]==ch){
		printf("%d",i);
		break;
		}
	}
	return 0;
}
