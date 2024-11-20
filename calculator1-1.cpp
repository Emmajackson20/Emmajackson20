#include<stdio.h>
//functions without arguments and return value
void add(void);
void product(void);
void subtract(void);
void division(void);
void dashboard(void);

int main()
{
	dashboard();
	return 0;
}

void dashboard(void)
{
	int choice = 0;
	puts("Welcome to the simple calculator APP");
	puts("1 = ADDITION");
	puts("2 = SUBTRACTION");
	puts("3 = DIVISION");
	puts("4 = MULTIPLICATION");
	//puts("5 = REMAINDER");
	puts("CHOOSE YOUR OPTION...");
	scanf("%d",&choice);
	if(choice == 1)
	   add();
	else if(choice == 2)
	   subtract();
	else if(choice == 3)
	   division();
	else if(choice == 4)
	   product();
	else 
	   printf("NOO A RIGHT CHOICE....");
}

void add(void)
{
	int num1=0, num2=0, sum=0;
	puts("Enter first number.....");
	scanf("%d",&num1);
	puts("Enter second number.....");
	scanf("%d",&num2);
	sum = num1 + num2;
	printf("Addition of %d and %d is %d",num1,num2,sum);
}

void subtract(void)
{
	int num1=0, num2=0, sub=0;
	puts("Enter first number.....");
	scanf("%d",&num1);
	puts("Enter second number.....");
	scanf("%d",&num2);
	sub = num1 - num2;
	printf("Subtraction of %d from %d is %d",num1,num2,sub);
}

void division(void)
{
	int num1=0, num2=0;
	float div=0.0;
	puts("Enter first number.....");
	scanf("%d",&num1);
	puts("Enter second number.....");
	scanf("%d",&num2);
	div = (float)num1 / (float)num2;
	printf("\nDivision of %d by %d is %.3f",num1,num2,div);
}

void product(void)
{
	int num1=0, num2=0, prod=0;
	puts("Enter first number.....");
	scanf("%d",&num1);
	puts("Enter second number.....");
	scanf("%d",&num2);
	prod = num1 * num2;
	printf("\nProduct of %d and %d is %d",num1,num2,prod);
}
