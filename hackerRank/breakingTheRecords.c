#include<stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	int scores[n];
	int minCount=0, maxCount=0, minVal, maxVal;
	
	for(i=0; i<n; i++)
		scanf("%d", &scores[i]);

	minVal=scores[0];
	maxVal=scores[0];

	for(i=0; i<n; i++)
	{
		if(scores[i]>maxVal)
		{
			maxVal=scores[i];
			maxCount++;
		}
		if(scores[i]<minVal)
		{
			minVal=scores[i];
			minCount++;
		}
	}

	printf("%d %d\n", maxCount, minCount);

	return 0;
}

