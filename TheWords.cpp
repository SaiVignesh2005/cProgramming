#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	scanf("%[^\n]*c",str);
	printf("%s",str);
	int count=0;
	for(int i=0;i<strlen(str)-2;i++){
		if(str[i]=='t'&&str[i+1]=='h'&&str[i+2]=='e'&&((i-1==-1&&str[i+3]==' ')||(i+2==strlen(str)-1&&str[i-1]==' ')||(str[i-1]==' '&&str[i+3]==' '))){
			count++;
			i+=2;
		}
	}
	printf("%d",count);
	return 0;
}
