
#include<stdio.h>
//functions without arguments but with return value
int add(void);
int product(void);
int subtract(void);
float  division(void);
void dashboard(void);

int main()
{
	dashboard();
	return 0;
}

void dashboard(void)
{
	int choice = 0, result;
	puts("Welcome to the simple calculator APP");
	puts("1 = ADDITION");
	puts("2 = SUBTRACTION");
	puts("3 = DIVISION");
	puts("4 = MULTIPLICATION");
	//puts("5 = REMAINDER");
	puts("CHOOSE YOUR OPTION...");
	scanf("%d",&choice);
	if(choice == 1){
	result=add();
	printf("\n%d",result);}
	else if(choice == 2){
	result=subtract();
	printf("\n%d",result);}
	else if(choice == 3){
	float answer=division();
	printf("\n%.3f",answer);}
	else if(choice == 4){
	result=product();
	printf("\n%d",result);}
	else 
	   printf("OOPS! INVALID CHOICE....");
}

 int add(void)
{
	int num1, num2;
	puts("Enter first number.....");
	scanf("%d",&num1);
	puts("Enter second number.....");
	scanf("%d",&num2);
	return num1 + num2;
}

int subtract(void)
{
	int num1=0, num2=0;
	puts("Enter first number.....");
	scanf("%d",&num1);
	puts("Enter second number.....");
	scanf("%d",&num2);
	return num1 - num2;
}

float division(void)
{
	int num1=0, num2=0;
	puts("Enter first number.....");
	scanf("%d",&num1);
	puts("Enter second number.....");
	scanf("%d",&num2);
	return (float)num1 / (float)num2;
}

int product(void)
{
	int num1=0, num2=0;
	puts("Enter first number.....");
	scanf("%d",&num1);
	puts("Enter second number.....");
	scanf("%d",&num2);
	return num1 * num2;
}
