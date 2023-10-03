#include <stdio.h>
int main(){
	int ans=65;
	for(int i=0;i<5;i++){
		for(int j=0;j<5-i;j++){
			printf("%c",ans+i);
		}
		printf("\n");
	}
	return 0;
}
