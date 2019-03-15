/*
Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a name and a password. However, the password must be strong. The website considers a password to be strong if it satisfies the following criteria:

Its length is at least 6.
It contains at least one digit.
It contains at least one lowercase English character.
It contains at least one uppercase English character.
It contains at least one special character. The special characters are: !@#$%^&*()-+
She typed a random string of length  in the password field but wasn't sure if it was strong. Given the string she typed, can you find the minimum number of characters she must add to make her password strong?

Note: Here's the set of types of characters in a form you can paste in your solution:

numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"
Input Format

The first line contains an integer  denoting the length of the string.

The second line contains a string consisting of  characters, the password typed by Louise. Each character is either a lowercase/uppercase English alphabet, a digit, or a special character.

Constraints

Output Format

Print a single line containing a single integer denoting the answer to the problem.

Sample Input 0

3
Ab1
Sample Output 0

3
Explanation 0

She can make the password strong by adding  characters, for example, $hk, turning the password into Ab1$hk which is strong.

 characters aren't enough since the length must be at least .

Sample Input 1

11
#HackerRank
Sample Output 1

1
Explanation 1

The password isn't strong, but she can make it strong by adding a single digit.
*/

#include<iostream>

using namespace std;

int main()
{
    string str;
    unsigned int len;
    cin >> len;
    cin >> str;
    unsigned int  special = 0, capital = 0, small = 0, number = 0;
    unsigned int error = 0;

    for(int i=0; i<len; i++)
    {
        if(str[i]>=' ' && str[i] < '0')
            special++;
        else if (str[i]>='0' && str[i] <= '9')
            number++;
        else if (str[i]>='a' && str[i] <= 'z')
            small++;
        else if (str[i]>='A' && str[i] <= 'Z')
            capital++;
    }


    if(capital == 0)
        error++;
    if(small == 0)
        error++;
    if(special == 0)
        error++;
    if(number == 0)
        error++;

    if(len < 6)
    {
        if(error <= 6-len)
            error = 6-len;
        else
            error = (error - (6-len)) + (6-len);
    }

    cout << error << endl;

    return 0;
}