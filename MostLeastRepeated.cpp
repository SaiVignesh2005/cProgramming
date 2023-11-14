#include <stdio.h>
#include <string.h>
int main(){
	char str[]="helloworldhello";
	printf("%s\n",str);
	for(int i=0;i<14;i++){
		for(int j=0;j<14-i;j++){
			if(str[j]>str[j+1]){
				char st=str[j];
				str[j]=str[j+1];
				str[j+1]=st;
			}
		}
	}
	printf("%s\n",str);
	char min,max;
	int mini=14,maxi=0;
	for(int i=0;i<14;i++){
		int x=i;
		while(str[i]==str[i+1]) i++;
		x=i-x;
		if(x<mini){
		min=str[i];
		mini=x+1;
		}
		if(x>maxi){
			max=str[i];
			maxi=x+1;
		}
	}
	printf("most repeated : %c\n",max);
	printf("least repeated : %c\n",min);
	return 0;
}
