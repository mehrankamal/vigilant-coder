#include<stdio.h>

int main()
{
	int n, k, j, i, a, b, nums=0;
	scanf("%d%d", &n, &k);
	int array[n];
	for(i=0; i<n; i++)
		scanf("%d", &array[i]);

	for(i=0; i<n; i++)
	{
		a=array[i];
		for(j=i+1; j<n; j++)
		{
			b=array[j];
			if((a+b)%k==0)
			{	
				nums++;
				printf("a = array[%d] = %d, b = array[%d] = %d, sum = %d, nums= %d\n", i, a, j, b, a+b, nums);
			}
		}
	}
	//printf("%d\n", nums);
}
