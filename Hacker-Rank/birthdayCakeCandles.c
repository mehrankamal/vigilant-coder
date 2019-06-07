#include<stdio.h>

int main()
{
	int n, i, max=0, count=0;
	scanf("%d", &n);
	int candles[n];
	for(i=0; i<n; i++)
	{
		scanf("%d", &candles[i]);
		if (candles[i]>max)
			max = candles[i];
	}
	for(i=0; i<n; i++)
	{
		if(candles[i]==max)
			count++;
	}

	printf("%d\n", count);
	
	return 0;
}

