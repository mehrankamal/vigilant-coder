#include<stdio.h>

int isJulianLeap(int);
int isGregorianLeap(int);

int main()
{
	int inputYear, year, day, month;
	scanf("%d", &inputYear);

	if(inputYear==1918)
	{
		printf("26.09.1918");
		
	}
	else if((inputYear<=1917 && (inputYear%4 == 0)) || ((inputYear%400 == 0) || ((inputYear%4 ==0) && (inputYear%100 != 0))))
	{
		printf("12.09.%d", inputYear);
	}
	else
	{
		printf("13.09.%d", inputYear);
	}

	printf("\n");

	return 0;
}

int isJulianLeap(int year)
{
	if(year%400==0)
		return 1;
	else if((year%4) == 0 && (year%100) != 0)
		return 1;
	else
		return 0;
}
int isGregorianLeap(int year)
{
	if(year%4==0)
		return 1;
	else
		return 0;
}
