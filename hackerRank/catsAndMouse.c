#include<stdio.h>

int main()
{
	int q, i, j;
	
	scanf("%d", &q);
	
	int queries[q][3];
	char answers[q];

	for(i=0; i<q; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &queries[i][j]);
		}
	}
	
	for(i=0; i<q; i++)
	{
		int distA = abs(queries[i][0] - queries[i][2]);
		int distB = abs(queries[i][1] - queries[i][2]);
		if(distA > distB)
			answers[i] = 'B';
		else if (distB > distA)
			answers[i] = 'A';
		else
			answers[i] = 'C';
	}
	
 	for(i=0; i<q; i++)
	{
		switch(answers[i])
		{
			case 'A':
				printf("Cat A\n");
				break;
			case 'B':
				printf("Cat B\n");
				break;
			case 'C':
				printf("Mouse C\n");
				break;
		}	
	}
 
	return 0;
}
