#include <stdio.h>
#include <ctype.h>
int main(){
	printf("Enter the character : ");
	char c;
	scanf("%c",&c);
	char ch=tolower(c);
	
	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') printf("vowel");
	else printf("consonant");
	return 0;
}
