#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, j;
	scanf("%d", &n);
	int num[n][n], secSum=0, priSum=0;
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d", &num[i][j]);
	for(i=0; i<n; i++)
		priSum+=num[i][i];
	for(i=0, j=n-1; i<n; i++, j--)
		secSum+=num[i][j];
	printf("%d", abs(priSum-secSum));
	return  0;
}
