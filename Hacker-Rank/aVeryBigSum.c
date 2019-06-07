#include<stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	long num[n], sum=0;
	for(i=0; i<n; i++)
	{
		scanf("%l", &num[i]);
		sum+=num[i];
	}
	printf("%l", sum);
}
