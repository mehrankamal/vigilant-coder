#include<stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	int num[n];
	float pos, neg, zero;
	float posCount=0, negCount=0, zeroCount=0;
	for(i=0; i<n; i++)
	{
		scanf("%d", &num[i]);
		if(num[i]<0)
			negCount++;
		else if (num[i]>0)
			posCount++;
		else
			zeroCount++;
	}
	pos = (posCount/n);
	neg = (negCount/n);
	zero = (zeroCount/n);
	printf("%f\n%f\n%f\n", pos, neg, zero);
	return 0;
}
