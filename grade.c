// a program that describes grade//
# include<stdio.h>
int main(){
	char grade;
	printf("Input the grade:");
	scanf(" %c", &grade);
	switch(grade){
		case 'A': printf("you have chosen excellent \n"); break;
		case 'B': printf("you have chosen very good \n"); break;
		case 'C': printf("you have chosen average \n"); break;
		case 'D': printf("you have chosen trial \n"); break;
		case 'F': printf("you have chosen Fail \n"); break;
		default: printf("Invalid grade \n");
		
	}
	return 0;
	
}