#include <stdio.h>
int main(){
	printf("Enter the length of string1 : ");
	int n,p;
	scanf("%d",&n);
	printf("Enter the length of string2 : ");
	scanf("%d",&p);
	char st1[n+p];
	char st2[p+1];
	printf("Enter the string 1 : ");
	scanf("%s",&st1);
	printf("Enter the string 2 : ");
	scanf("%s",&st2);	
	for(int i=0;st2[i];i++){
		st1[n+i]=st2[i];
	}
	printf("Concatenated String : %s",st1);
	return 0;
}
