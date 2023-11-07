#include <stdio.h>
int main(){
	printf("Enter the string : ");
	char c[20];
	scanf("%s",&c);int len=0;
	for(int i=0;c[i];i++){
		len++;
	}
	printf("Length = %d",len);
	return 0;
}
