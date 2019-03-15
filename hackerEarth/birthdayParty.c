/*
Mr. X's birthday is in next month. This time he is planning to invite N of his friends. He wants to distribute some chocolates to all of his friends after party. He went to a shop to buy a packet of chocolates.
At chocolate shop, each packet is having different number of chocolates. He wants to buy such a packet which contains number of chocolates, which can be distributed equally among all of his friends.
Help Mr. X to buy such a packet.

Input:
First line contains T, number of test cases.
Each test case contains two integers, N and M. where is N is number of friends and M is number number of chocolates in a packet.

Output:
In each test case output "Yes" if he can buy that packet and "No" if he can't buy that packet.

Constraints:
1<=T<=20
1<=N<=100
1<=M<=10^5

Problem Setter:
Akash Rakshit

SAMPLE INPUT 
2
5 14
3 21
SAMPLE OUTPUT 
No
Yes
*/

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
