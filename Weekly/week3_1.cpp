#include <stdio.h>

int main() {
	int n,i=0,k=0;
	scanf_s("%d",&n);
	while (k < n)
	{

		while (i  < n)
		{
			printf("*");
			if (i == n - 1) {
				printf("\n");
			}
			i++;
		}
		i = 0;
		k++;
	}
	return 0;
}
