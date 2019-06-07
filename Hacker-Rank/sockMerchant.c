#include<stdio.h>

int main()
{
	int n, i, j, count = 0;
	scanf("%d", &n);
	
	int color[n];
    
    for(i=0; i<n; i++)
    {
    	scanf("%d", &color[i]);
	}
    
    for (i=0; i<n-1; i++)
    {
    	for(j=i+1; j<n; j++)
    	{
    		if(color[i]==color[j] && color[i]>=0 && color[j]>=0)
    		{
    			count++;
    			color[j] = -1;
    			color[i] = -1;
			}
		}
	}
	
	printf("%d", count);
    
    return 0;
}
