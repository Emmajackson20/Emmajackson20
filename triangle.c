#include <stdio.h>
int main(){
	int triangle_side;
	float triangle_area, temp_variable;
	//input the length of the side of triangle
	printf("\nEnter the side of triangle side");
	scanf("%d", &triangle_side);
	//calculate and display the area of  equilateral triangle
	temp_variable=sqrt(3)/4;
	triangle_area= temp_variable*triangle_side;
	printf("\nArea of equlateral triangle is :%f",triangle_area);
	return 0;
	
	
	
	
	
}