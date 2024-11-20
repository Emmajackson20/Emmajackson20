#include<stdio.h>
#include<climits>
int main()
{
	int val1=0, val2=0;
	do
	{
	printf("Enter any two integers...\n");
		scanf("%d%d",&val1,&val2);
	}//while((val1 <= INT_MIN || val1 >= INT_MAX) || (val2 <= INT_MIN || val2 >= INT_MAX));
	while((val1 <= 0 || val1 >= 10000) || (val2 <=0 || val2 >= 5000));
	puts("Thanks");
	return 0;
}