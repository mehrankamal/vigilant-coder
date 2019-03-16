//Problem:      Roy and Profile Picture
//Link:         https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int i, j, n;

    int L;
    scanf("%d%d", &L, &n);
    int dim[n][2];

    for(i=0; i<n; i++)
    {
        scanf("%d %d", &dim[i][0], &dim[i][1]);
    }

    for(i=0; i<n; i++)
    {
        if (dim[i][0]<L || dim[i][1]<L)
        {
            printf("UPLOAD ANOTHER\n");
        }
        else
        {
            if(dim[i][0]==dim[i][1])
                printf("ACCEPTED\n");
            else
                printf("CROP IT\n");
        }
    }

    return 0;
}
