#include<stdio.h>
struct student
{
	char regNo[18];
	char FN[20];
	char LN[20];
	char gender[6];
	int age;
	char syear[10];	
};
void ourfn(void); 
int main()
{
	ourfn();
	return(0);
}
void ourfn(void)
{
	struct student uictstu;
	printf("Registration No please....");
	gets(uictstu.regNo);
	printf("\nFirstName Please... ");
	gets(uictstu.FN);
	printf("\n Lastame Please....");
	gets(uictstu.LN);
	printf("\n gender please...");
	gets(uictstu.gender);
	fflush(stdin);
	printf("\n AGE please...");
	scanf("%d",&uictstu.age);
	printf("\n studyYear please...");
	gets(uictstu.syear);
	printf("The record  Entered is as follows:\n");
	printf("Name:%s %s \n RegistrationNumber: %s \n Gender: %s \n Age:%d \n studyyear:%s", uictstu.FN,uictstu.LN,uictstu.regNo,uictstu.gender,uictstu.age,uictstu.syear);
	
}
