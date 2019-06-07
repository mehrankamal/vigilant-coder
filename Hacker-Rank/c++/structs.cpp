//Problem:          
//Link:             

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int age;
    string firstName;
    string lastName;
    int standard;
};

int main() {
    Student st;
    
    cin >> st.age >> st.firstName >> st.lastName >> st.standard;
    cout << st.age << " " << st.firstName << " " << st.lastName << " " << st.standard;
    
    return 0;
}

