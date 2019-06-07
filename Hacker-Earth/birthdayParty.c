//Problem:		Birthday Party
//Link:			https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/birthday-party-12/

#include<stdio.h>

int main()
{
	int N,i;
	
	scanf("%d", &N);
	
	int NMPair[N][2];
	
	for(i=0; i<N; i++)
		scanf("%d%d", &NMPair[i][0], &NMPair[i][1]);
		
	for(i=0; i<N; i++)
		if(NMPair[i][1]%NMPair[i][0] == 0)
			printf("Yes\n");
		else
			printf("No\n");
	
	return 0;
}
