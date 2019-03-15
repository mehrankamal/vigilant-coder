#include<stdio.h>

int main()
{
	int n, p, countS=0, countE=0;
	
	scanf("%d %d", &n, &p);
	
	int start, end;
	
	countS = p/2;
	countE = (n/2)-(p/2);
	
//	if(p%2==0)
//	{
//		start = 0;
//		while(start != p)
//		{
//			countS++;
//			start+=2;
//		}
//		
//		if(n%2==0)
//		{
//			end = n;
//			while(end != p)
//			{
//				countE++;
//				end-=2;
//			}
//		}
//		else
//		{
//			end=n-1;
//			while(end != p)
//			{
//				countE++;
//				end-=2;
//			}
//		}
//	}
//	else
//	{
//		start = 1;
//		while(start != n)
//		{
//			countS++;
//			start+=2;
//		}
//		
//		if(n%2==0)
//		{
//			end = n+1;
//			while(end != p)
//			{
//				countE++;
//				end-=2;
//			}
//		}
//		else
//		{
//			end = n;
//			while(end != p)
//			{
//				countE++;
//				end-=2;
//			}
//		}
//	}
	
	if(countE<countS)
		printf("%d", countE);
	else
		printf("%d", countS);
	
	return 0;   
}
