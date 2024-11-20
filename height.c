// a program that categorises people by height//
#include<stdio.h>
int main(){
	int height;
	printf("Enter the height in centimeters:");
	scanf("%d",&height);
	if (height<150){
		printf("The person is short. \n");
	}
	else if(height >= 150 && height <= 170){
		printf(" The person is average height. \n");
	
	}
	else { printf("the person is tall. \n");
	}
	return 0;
}