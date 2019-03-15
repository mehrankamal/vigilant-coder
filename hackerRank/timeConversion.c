#include<stdio.h>
#include<string.h>

int main()
{
	char t12[2];
	int hh, mm, ss;
	scanf("%2d:%2d:%2d%s", &hh, &mm, &ss, t12) ;
	
	if(strcmp(t12, "PM")==0 && hh!=12)
		hh+=12;
	if(strcmp(t12, "AM")==0 && hh==12)
		hh=00;

	printf("%02d:%02d:%02d\n", hh, mm, ss);

	return 0;
}
