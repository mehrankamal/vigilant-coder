#include<stdio.h>

int main()
{
	int n, m, i, j;
	scanf("%d%d", &n, &m);
	
	int aSet[n], bSet[m];
	int count=0, condA=0, condB=0;

	for(i=0; i<n; i++)
		scanf("%d", &aSet[i]);
	for(i=0; i<m; i++)
		scanf("%d", &bSet[i]);

	for(i=aSet[n-1]; i<=bSet[0]; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i%aSet[j]==0)
				condA=1;
			else
			{
				condA=0;
				break;
			}
		}
		for(j=0; j<m; j++)
		{
			if(bSet[j]%i==0)
				condB=1;
			else
			{
				condB=0;
				break;
			}
		}
		if(condA==1 && condB==1)
			count++;
	}

	printf("%d\n", count);

	return 0;
}

