// a program that checks voting eligibility//
#include <stdio.h>
int main(){
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>= 18){
		printf("you are eligible to vote. \n");
	}
	else{
		printf("you are not eligible to vote. \n");
	}
	return 0;
}