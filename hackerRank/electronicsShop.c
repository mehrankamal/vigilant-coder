#include<stdio.h>
#include<stdlib.h>

int main()
{
	int b, n, m, i, j, max = -1;
	
	scanf("%d %d %d", &b, &n, &m);
	
	int key[n];
	int usb[m];
	
	for(i=0; i<n; i++)
		scanf("%d", &key[i]);
	for(i=0; i<m; i++)
		scanf("%d", &usb[i]);

	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if((key[i] + usb[j])>max && (key[i] + usb[j])<=b)
			{
				max = (key[i] + usb[j]);
				printf("%d, %d, %d\n", key[i], usb[j], max);
			}
		}
	}
	
	printf("%d", max);

	return 0;   
}
