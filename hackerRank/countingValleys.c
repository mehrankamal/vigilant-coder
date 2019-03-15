#include<stdio.h>

int main()
{
	int n, alt = 0, count = 0, i;
	scanf("%d", &n);
	
	char steps[n+1];
	scanf("%s", steps);
	
	for(i=0; i<n; i++)
	{
		if(steps[i] == 'U')
		{
			alt++;
		}
		else if (steps[i] == 'D')
		{
			if(alt == 0)
				count++;
			alt--;
		}
	}
	
	printf("%d", count);
	
	return 0;   
}
