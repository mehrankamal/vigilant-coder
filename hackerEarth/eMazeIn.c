//Problem:      e-maze-in
//Link:         https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int x = 0, y=0, j, i;

    char str[201];
    scanf("%s", str);

    j=strlen(str);

    for(i=0; i<j; i++)
    {
        switch (str[i])
        {
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
            case 'L':
                x--;
                break;
            case 'R':
                x++;
                break;
        }
    }

    printf("%d %d\n", x, y);

    return 0;
}
