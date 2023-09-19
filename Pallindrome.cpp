#include <stdio.h>
int main(){
	printf("Enter the number  : ");
	int N;
	scanf("%d",&N);
	int reverse=0;
	int n=N;
	while(n!=0){
		reverse=reverse*10+n%10;
		n/=10;
	}
	if(reverse==N) printf("Pallindrome");
	else printf("Not a pallindrome");	
}
