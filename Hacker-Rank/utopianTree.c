#include<stdio.h>

int main()
{
	int t, i, j, height;
	
	scanf("%d", &t);
	
	int n[t];
	
	for(i=0; i<t; i++)
		scanf("%d", &n[i]);
	
	for(i=0; i<t; i++)
	{
		height = 1;
		for(j=1; j<=n[i]; j++)
		{
			if(j%2==0)
				height+=1;
			else
				height*=2;
		}
		n[i] = height;
	}
	
	for(i=0; i<t; i++)
		printf("%d\n", n[i]);
	
	return 0;
}
