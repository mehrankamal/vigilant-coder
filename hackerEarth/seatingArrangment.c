/*
Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like 

So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows : 

Window Seat : WS
Middle Seat : MS
Aisle Seat : AS

You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

CONSTRAINTS
1<=T<=105
1<=N<=108
SAMPLE INPUT 
2
18
40
SAMPLE OUTPUT 
19 WS
45 AS
*/

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
