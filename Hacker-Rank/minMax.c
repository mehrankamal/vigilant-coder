#include<stdio.h>

int main()
{
	int n=5, i;
	long array[n], sums[n];
	long min, max, sum=0;
	for(i=0; i<n; i++)
	{
		scanf("%ld", &array[i]);
		sum+=array[i];
	}
	for(i=0; i<n; i++)
		sums[i]=sum-array[i];
	min=sums[0];
	max=sums[0];
	for(i=0; i<n; i++)
	{
		if(sums[i]<min)
			min = sums[i];
		if(sums[i]>max)
			max = sums[i];
	}
	printf("%ld %ld\n", min, max);
	
	return 0;
}

