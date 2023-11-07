#include <stdio.h>
int main(){
	printf("Enter the length of string : ");
	int n;
	scanf("%d",&n);
	char st[n+1];
	char ans[n+1];
	printf("Enter the string : ");
	scanf("%s",&st);
	for(int i=0;st[i];i++){
		ans[i]=st[i];
	}
	printf("Copied String : %s",ans);
	return 0;
}
