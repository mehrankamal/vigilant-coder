#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i, j, spaces=n-1, col=1;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<spaces; j++)
			printf(" ");
		for(j=0; j<col; j++)
			printf("#");
		printf("\n");
		col++;
		spaces--;
	}

	return 0;
}
