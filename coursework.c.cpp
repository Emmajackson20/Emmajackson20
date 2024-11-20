#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

void capture(int cws[4]);
void sort(int cws[4]);
void dashboard(void);
void finalcw(int cws[4]);
void advice(void);

int cws[4] = {0,0,0,0};
char name[25], regNo[20];
float finalMark = 0.0;

int main()
{
	puts("Hello there, this is a course work system");
	puts("For sensible results, start by choosing option 1");
	puts("Thank you. Press any key to continue...");
	
	dashboard();
}

void capture(int cws[4])
{
	system("cls");
	
	printf("Please enter your name...");
	gets(name);
	printf("\n Please enter your registration number...");
	gets(regNo);
	
	for(int i=0; i<4; i++)
		do
		{
			printf("Enter course work %d out of 50...\n",i+1);
			scanf("%d%*c",&cws[i]);
		}while((cws[i] > 50) ||(cws[i] < 0));
	printf("Course works captured...Press any key to continue");
	getch();
	dashboard();
}

void dashboard(void)
{
	int choice = 0;
	
	getch();
	system("cls");
	printf("\n 1 = CAPTURE THE RESULTS\n");
	printf("\n 2 = SORT THE RESULTS\n");
	printf("\n 3 = CALCULATE THE FINAL RESULTS\n");
	printf("\n 5 = ADVICE ABOUT MY STUDIES\n");
	printf("\n 4 = EXIT SYSTEM\n");
	printf("\n MAKE A CHOICE...");
	
	scanf("%d%*c",&choice);
	
	if(choice == 1)  capture(cws);
	else if(choice == 2)  sort(cws);
	else if(choice == 3)  finalcw(cws);
	else if(choice == 4)  exit(0);
	else if(choice == 5)  advice();
	else
	{
		puts("Invalid option");
		puts("Press any key to quit");
		getch();
		exit(1);
	}
}

void sort(int cws[4])
{
	int temp = 0;
	
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(cws[j] > cws[j+1])
			{
				temp = cws[j];
				cws[j] = cws[j+1];
				cws[j+1] = temp;
			}
		}
	}
	
	printf("\nCourse work scores in ascending oreder are...\n");
	for(int i = 0; i < 4; i++)
		printf("%d\n",cws[i]);
	puts("Press any key to continue...");
	getch();
	dashboard();
}

void finalcw(int cws[4])
{
	float totalMark = 0.0;
	char grade[]="FF";
	for(int i=0; i<4; i++)
		totalMark += (float)cws[i];
	finalMark = (totalMark/200.0)*40.0;
	if(finalMark >= 35.0) 
		strcpy(grade,"A");
	else if(finalMark >= 30.0) 
		strcpy(grade,"B+");
	else if(finalMark >= 25.0) 
		strcpy(grade,"B");
	else if(finalMark >= 20.0) 
		strcpy(grade,"C+");
	else 
		strcpy(grade,"F");
	
	puts(name);
	puts(regNo);
	printf("\n\nFinal mark is...%d",(int)finalMark);
	printf("\n\nGrade is...%s\n",grade);
	puts("A------------>35 - 40");
	puts("B+----------->30 - 34");
	puts("B------------>25 - 29");
	puts("C+----------->20 - 24");
	
	printf("\n\n Press any key to continue");
	getch();
	dashboard();
}

void advice(void)
{
	system("cls");
	//float topUp = 0.0;
	
	if(finalMark < 20.0)
	{
		puts("You do not have the required course work mark to earn grade A in this unit");
		puts("I advise you to halt doing examinations if you really want an A");
		puts("Attempt this unit next time round and be serious with your course works");
	}
	else
	{
		printf("\nYou have a course mark of %d",(int)finalMark);	
		printf("\nFor an A grade, You must score at least %d in the examinations",(int)(80.0 - finalMark));
		printf("\nFor a B+ grade, You must score at least %d in the examinations",(int)(75.0 - finalMark));
		printf("\nFor a B grade, You must score at least %d in the examinations",(int)(70.0 - finalMark));
		printf("\nFor a C+ grade, You must score at least %d in the examinations",(int)(65.0 - finalMark));
		//printf("\nFor a C grade, You must score %d in the examinations",(int)(60.0 - finalMark));
		printf("\nAny grade less than C+ is not advisable in this IT erra");
	}
	
	printf("\n\n Press any key to continue");
	getch();
	dashboard();
}