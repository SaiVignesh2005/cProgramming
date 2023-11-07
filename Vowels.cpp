#include <stdio.h>
char strlwr(char ch){
	if(ch>=65&&ch<=90) ch+=32;
	return ch;
}
int main(){
	printf("Enter the length of string : ");
	int n;
	scanf("%d",&n);
	char st[n+1];
	printf("Enter the string : ");
	scanf("%s",st);
	for(int i=0;i<n;i++){
		if(strlwr(st[i])=='a'||strlwr(st[i])=='e'||strlwr(st[i])=='i'||strlwr(st[i])=='o'||strlwr(st[i])=='u') printf("%c",st[i]);
	}
	return 0;
}
