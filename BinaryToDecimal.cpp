#include <stdio.h>
#include <math.h>
int main(){
	printf("Enter the binary number : ");
	int num;
	scanf("%d",&num);
	int deci=0;
	int i=0;
	while(num!=0){
		deci+=(num%10)*(pow(2,i));
		i++;
		num/=10;
	}
	printf("%d",deci);
	return 0;
}
