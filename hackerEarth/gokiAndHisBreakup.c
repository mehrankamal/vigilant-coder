//Problem:      Goki and his breakup
//Link:         https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/tds-and-his-breakup/

#include<stdio.h>

int main()
{
	int N, X, i;
	scanf("%d%d", &N, &X);
	int skill[N];

	for(i=0; i<N; i++)
		scanf("%d", &skill[i]);

	for(i=0; i<N; i++)
	{
		if(skill[i]>=X)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}
