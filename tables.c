#include<stdio.h>
int main()
{
	int count=1;
	
	for(int i=1; i<=12; i++)
	{
		for(int j=1; j<=12; j++)
		{
			printf("%4d",j*i);
			count++;
			if (count==13)
			{
				count=1;
				printf("\n");
			}
		}
	
	}
}