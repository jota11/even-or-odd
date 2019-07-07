#include <stdio.h>

int main()
{
	int num;
	printf("Type any number and the system will say if it is even or odd:");
	scanf("%d",&num);
	if (num%2==0)
	{
		printf("%d is an even number",num);
	}
	else
	{
		printf("%d is an odd number",num);
	}
	return 0;
}

