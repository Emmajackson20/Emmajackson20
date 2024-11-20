#include<stdio.h>
//functions with arguments and return value
int  add(int,int);
int product(int,int);
int subtract(int,int);
float  division(int,int);
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
	int num1,num2;
	result=add(num1,num2);
	printf("\n%d",result);}
	else if(choice == 2){
	int num1,num2;
	result=subtract(num1,num2);
	printf("\n%d",result);}
	else if(choice == 3){
	int num1,num2;
	float answer=division(num1,num2);
	printf("\n%.3f",answer);}
	else if(choice == 4){
	int num1,num2;
	result=product(num1,num2);
	printf("\n%d",result);}
	else 
	   printf("NOT A RIGHT CHOICE....");
}

 int add(int num1,int num2)
{
	puts("Enter first number.....");
	scanf("%d",&num1);
	puts("Enter second number.....");
	scanf("%d",&num2);
	return num1 + num2;
}

int subtract(int num1=0, int num2=0)
{
	
	puts("Enter first number.....");
	scanf("%d",&num1);
	puts("Enter second number.....");
	scanf("%d",&num2);
	return num1 - num2;
}

float division(int num1=0,int num2=0)
{
	
	puts("Enter first number.....");
	scanf("%d",&num1);
	puts("Enter second number.....");
	scanf("%d",&num2);
	return (float)num1 / (float)num2;
} 

int product(int num1=0, int num2=0)
{
	puts("Enter first number.....");
	scanf("%d",&num1);
	puts("Enter second number.....");
	scanf("%d",&num2);
	return num1 * num2;
}
