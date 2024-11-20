// a program that identifies the type of triangle//
#include <stdio.h>
int main(){
	int side1, side2, side3;
	printf("Enter the lengths of the three sides of a triangle:");
	scanf("%d %d %d", &side1, &side2, &side3);
	if (side1==side2 && side2==side3){
		printf("the triangle is equilateral. \n");
	}
	else if(side1 == side2 || side2 == side3 || side1 == side3){
		printf("the triangle is isosceles.\n");
	}
	else{
		printf("the triangle is scalene. \n");
		
	}
	return 0;
}