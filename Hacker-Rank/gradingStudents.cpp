/*
HackerLand University has the following grading policy:

Every student receives a  in the inclusive range from  to .
Any  less than  is a failing grade.
Sam is a professor at the university and likes to round each student's  according to these rules:

If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .
If the value of  is less than , no rounding occurs as the result will still be a failing grade.
For example,  will be rounded to  but  will not be rounded because the rounding would result in a number that is less than .

Given the initial value of  for each of Sam's  students, write code to automate the rounding process.

Function Description

Complete the function gradingStudents in the editor below. It should return an integer array consisting of rounded grades.

gradingStudents has the following parameter(s):

grades: an array of integers representing grades before rounding
Input Format

The first line contains a single integer, , the number of students. 
Each line  of the  subsequent lines contains a single integer, , denoting student 's grade.

Constraints

Output Format

For each , print the rounded grade on a new line.

Sample Input 0

4
73
67
38
33
Sample Output 0

75
67
40
33
Explanation 0

image

Student  received a , and the next multiple of  from  is . Since , the student's grade is rounded to .
Student  received a , and the next multiple of  from  is . Since , the grade will not be modified and the student's final grade is .
Student  received a , and the next multiple of  from  is . Since , the student's grade will be rounded to .
Student  received a grade below , so the grade will not be modified and the student's final grade is .
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    int num;
    for(int i=0; i< tests; i++)
    {
        cin >> num;
        if(num < 38)
        {
            cout << num << endl;
            continue;
        }
        for(int j=0; j<=100; j += 5)
        {
            if(j - num < 3 && j-num >=0)
            {
                num = j;
                break;
            }
        }
        cout << num << endl;
    }

    return 0;
}