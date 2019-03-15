/*
Ankit is in maze. The command center sent him a string which decodes to come out from the maze. He is initially at (0, 0). String contains L, R, U, D denoting left, right, up and down. In each command he will traverse 1 unit distance in the respective direction.

For example if he is at (2, 0) and the command is L he will go to (1, 0).

Input:

Input contains a single string.

Output:

Print the final point where he came out.

Constraints:

1 ≤ |S| ≤ 200

SAMPLE INPUT 
LLRDDR
SAMPLE OUTPUT 
0 -2
*/

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
