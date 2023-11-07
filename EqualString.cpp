#include <stdio.h>
int main(){
	printf("Enter the length of string : ");
	int n;
	scanf("%d",&n);
	char st1[n+1];
	printf("Enter the string1 : ");
	scanf("%s",&st1);
	char st2[n+1];
	printf("Enter the string2 : ");
	scanf("%s",&st2);
	int flag=1;
	for(int i=0;i<n;i++){
		if(st1[i]!=st2[i]){
			flag=0;
			break;
		}
	}
	if(flag) printf("Equal");
	else printf("Unequal");
	return 0;
}
