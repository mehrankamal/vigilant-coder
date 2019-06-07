#include<stdio.h>

int main()
{
	int n, m, i, j;
	scanf("%d", &n);
	int rank[n];
	long scores[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%ld", &scores[i]);
		if(i!=0)
		{
			if(scores[i-1] == scores[i])
				rank[i] = rank[i-1];
			else
				rank[i] = rank[i-1]+1;
		}
		else
		{
			rank[i] = 1;
		}
	}
	
	scanf("%d\n", &m);
	
	int rankAlice;
	long alice[m];
	
	for(i=0; i<m; i++)
		scanf("%ld", &alice[i]);
	
	int last = n-1;
	for(i=m-1; i>=0;i--)
	{
		rankAlice = rank[n-1]+1;
		for(j = last; j>=0; j--)
		{
			if(alice[i]>=rank[j])
			{
				last = j;
				rankAlice = rank[j];
				break;
			}
		}
		printf("%d\n", rankAlice);
	}
	

	return 0;
}
