#include <stdio.h>

int main()
{
	int x;
	int count = 1;
	scanf_s("%d", &x);
	int tower = x-1;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < tower ; j++)
		{
			printf(" ");
			
		}
		for (int k = 0; k < count; k++)
		{
			printf("*");
		}
		for (int j = 0; j < x - 1; j++)
		{
			printf(" ");
		}
		count = count + 2;
		tower--;
		printf("\n");
	}
}