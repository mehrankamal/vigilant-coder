//Problem:      Palindromic String
//Link:         https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

#include<stdio.h>
#include<math.h>

int main()
{
	int t, i;
	scanf("%d", &t);
	
	int n[t][3];
	
	for(i=0; i<t; i++)
		scanf("%d", &n[i]);
		
	for(i=0; i<t; i++)
	{
		if (n[i][0]%6==0 || (n[i][0]-1)%6==0)
		{
			n[i][2]='W';
		}
		else if (n[i][0]%3==0 || (n[i][0]-1)%3==0)
		{
			n[i][2]='A';
		}
		else
		{
			n[i][2]='M';
		}
		
		if(n[i][0]%12<=6 && n[i][0]%12 != 0)
		{
		
			if(n[i][2]=='W')
			{
				if(n[i][0]%6==0)
					n[i][1]=n[i][0]+1;
				else
					n[i][1]=n[i][0]+11;
			}
			else if(n[i][2]=='M')
			{
				if(n[i][0]%2==0)
					n[i][1]= n[i][0]+9;
				else
					n[i][1]= n[i][0]+3;
			}
			else
			{
				if(n[i][0]%3==0)
					n[i][1]=n[i][0]+7;
				else
					n[i][1]=n[i][0]+5;
			}
		}
		else
		{
			if(n[i][2]=='W')
			{
				if(n[i][0]%6==0)
					n[i][1]=n[i][0]-11;
				else
					n[i][1]=n[i][0]-1;
			}
			else if(n[i][2]=='M')
			{
				if(n[i][0]%2==0)
					n[i][1]= n[i][0]-3;
				else
					n[i][1]= n[i][0]-9;
			}
			else
			{
				if(n[i][0]%3==0)
					n[i][1]=n[i][0]-5;
				else
					n[i][1]=n[i][0]-7;
			}
		}
		printf("%d %cS\n", n[i][1], n[i][2]);
	}
	
	return 0;
}
