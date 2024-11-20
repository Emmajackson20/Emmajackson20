// a program that names the day using its number//
#include<stdio.h>
int main(){
	int day_number;
	printf("Enter day number (1-7):");
	scanf("%d", &day_number);
	switch (day_number){
		case 1: printf("sunday \n"); break;
		case 2: printf("Monday \n"); break;
		case 3: printf("Tuesday \n"); break;
		case 4: printf("Wednesday\n"); break;
		case 5: printf("Thursday \n"); break;
		case 6: printf("Friday \n"); break;
		case 7: printf("saturday \n"); break;
		default : printf("Invalid day number \n");
	}
	return 0;
}
