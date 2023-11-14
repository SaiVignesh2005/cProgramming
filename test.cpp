#include <stdio.h>
#include <string.h>
int main(){
	char string[100];
	printf("Enter the string : ");
	scanf("%[^\n]%*c",string);
	fflush(stdin);
	for(int i=0;i<100;i++){
		if((i==0||string[i-1]==' ')&&string[i]<=122&&string[i]>=97) string[i]-=32;
	}
	printf("%s",string);
	return 0;
}
