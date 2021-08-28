#include <stdio.h>
int main() {
	int a ,j;
	scanf_s("%d",&a);
	for (int i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

