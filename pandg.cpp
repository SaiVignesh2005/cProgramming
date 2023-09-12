#include <stdio.h>
int main(){
	float phy,chem,bio,math,comp;
	printf("Enter the mark in 5 subjects : ");
	scanf("%f %f %f %f %f",&phy,&chem,&bio,&math,&comp);
	float percentage=(phy+chem+bio+math+comp)/5;
	printf("Percentage = %f %%",percentage);
	int per=percentage;
	if(per>=90) printf("\nGrade A");
	else if(per>=80) printf("\nGrade B");
	else if(per>=70) printf("\nGrade C");
	else if(per>=60) printf("\nGrade D");
	else if(per>=40) printf("\nGrade E");
	else printf("\nGrade F");
	return 0;
}
