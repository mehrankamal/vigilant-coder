//Problem:	Aman & Mr.Sharma
//Link:		https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/aman-mrsharma/

#include<stdio.h>

int main()
{
	int N, toffee = 0, i;
	float pi = 22.0/7.0;
	int able, circum;
	scanf("%d", &N);

	int r, x;

	for(i=0; i<N; i++)
	{
		scanf("%d%d", &r, &x);
		able = 100 * x;
		circum = 2*pi*r;
		if(able>circum)
			toffee++;
		fflush(stdin);
	}

	printf("%d", toffee);

	return 0;
}
