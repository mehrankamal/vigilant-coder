#include<stdio.h>

int main()
{
	int n, i, val, index, max;
	scanf("%d", &n);
	int count[n], typeCount[5]={0};

	for(i=0; i<n; i++)
		scanf("%d", &count[i]);

	for(i=0; i<n; i++)
	{
		val=count[i];
		switch (val)
		{
			case 1:
				typeCount[0]++;
				break;
			case 2:
				typeCount[1]++;
				break;
			case 3:
				typeCount[2]++;
				break;
			case 4:
				typeCount[3]++;
				break;
			case 5:
				typeCount[4]++;
				break;
		}
	}

	max = typeCount[4];
	index=5;

	for(i=4; i>=0; i--)
	{
		if(typeCount[i]>=max)
		{
			max=typeCount[i];
			index=i+1;
		}
	}

	printf("%d\n", index);

	return 0;
}
