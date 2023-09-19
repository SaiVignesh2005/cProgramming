#include <stdio.h>
#include <ctype.h>
int main(){
	printf("Enter the character : ");
	char c;
	scanf("%c",&c);
	if (isalpha(c)) printf("Alphabet");
	else if (isdigit(c))printf("Digit");
	else printf("special character");
	return 0;
}
