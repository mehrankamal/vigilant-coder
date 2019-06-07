#include<stdio.h>

int main()
{
	int n, i, j, d, m, ways=0, sum;
	scanf("%d", &n);
	int squares[n];

	for(i=0; i<n; i++)
		scanf("%d", &squares[i]);

	scanf("%d%d", &d, &m);

	for(i=0; i<n-m+1; i++)
	{
		sum=0;
		for(j=0 ;j<m; j++)
		{
			sum+=squares[i+j];
		}
		if(sum==d)
		{
			ways++;
		}
	}

	printf("%d\n", ways);

	return  0;
}
