#include <stdio.h>
#include <ctype.h>
int main(){
	printf("Enter the character : ");
	char c;
	scanf("%c",&c);
	char ch=tolower(c);
	
	if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') printf("lowercase");
	else printf("Uppercase");
	return 0;
}
