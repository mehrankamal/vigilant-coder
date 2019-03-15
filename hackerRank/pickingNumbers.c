#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j, len = 0, max = 0;
	scanf("%d", &n);
	int a[n];
	int b[n*2];
	
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
		
	for(i=0; i<n; i++)
	{
		len = 0;
		for(j=0; j<n; j++)
		{
			if(j!=i)
			{
				if(abs(a[i]-a[j])<=1)
				{
					len++;
				}
				
			}
		}
	}
	
	printf("%d", max);
	
	return 0;
}
