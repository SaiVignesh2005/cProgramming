#include <stdio.h>
int main(){
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  int sum=n%10;
  if(n/10==0) printf("Single Digit Number");
  else{
    while(n/10>0){
      n=n/10;
    }
    sum+=n;
    printf("%d",sum);
  }
return 0;
}
