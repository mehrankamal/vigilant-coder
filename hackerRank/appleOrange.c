#include<stdio.h>

int main()
{
	int s, t, a, b, m, n, i;
	int appleCount=0, orangeCount=0;	

	scanf("%d %d", &s, &t);
	scanf("%d %d", &a, &b);
	scanf("%d %d", &m, &n);

	int apples[m], oranges[n];

	for(i=0; i<m; i++)
	{
		scanf("%d", &apples[i]);
		if((a+apples[i])>=s && (a+apples[i])<=t)
			appleCount++;
	}

	for(i=0; i<n; i++)
	{	
		scanf("%d", &oranges[i]);
		if((b+oranges[i])>=s && (b+oranges[i])<=t)
			orangeCount++;
	}

	printf("%d\n%d\n", appleCount, orangeCount);

	return 0;
}
