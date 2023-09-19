#include <stdio.h>
int main(){
	printf("Enter the character : ");
	char c;
	scanf("%c",&c);
	if(int(c)-int('A')<32) printf("Uppercase");
	else printf("lowercase");
}
