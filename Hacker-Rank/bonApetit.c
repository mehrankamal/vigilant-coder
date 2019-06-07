#include<stdio.h>

int main()
{
    int n, k, bAct = 0, bChar;
    int i;
    scanf("%d %d", &n, &k);
    
    int bill[n];
    
    for(i=0; i<n; i++)
    {
    	scanf("%d", &bill[i]);
   		bAct+=bill[i];
	}
	
	bAct -= bill[k];
	
	bAct /= 2;
	
	scanf("%d", &bChar);
    
    if(bChar == bAct)
    	printf("Bon Appetit");
    else
		printf("%d", bChar - bAct);
    
    return 0;
}
