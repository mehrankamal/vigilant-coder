//Problem:          
//Link:             

#include <iostream>
#include <sstream>
using namespace std;


class Student
{
    private:
        int age;
        string firstName;
        string lastName;
        int standard;
    public:
        void setAge(int age)
        {
            this -> age = age;
        }
        void setStandard(int std)
        {
            standard = std;
        }
        void setFirstName(string name)
        {
            firstName = name;
        }
        void setLastName(string name)
        {
            lastName = name;
        }
        int getAge(void)
        {
            return age;
        }
        string getLastName(void)
        {
            return lastName;
        }
        string getFirstName(void)
        {
            return firstName;
        }
        int getStandard(void)
        {
            return standard;
        }
        string toString(void)
        {
            stringstream ss;
            ss << age << "," << firstName << "," << lastName << "," << standard;
            return ss.str();
        }

};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.setAge(age);
    st.setStandard(standard);
    st.setFirstName(first_name);
    st.setLastName(last_name);
    
    cout << st.getAge() << "\n";
    cout << st.getLastName() << ", " << st.getFirstName() << "\n";
    cout << st.getStandard() << "\n";
    cout << "\n";
    cout << st.toString();
    
    return 0;
}

