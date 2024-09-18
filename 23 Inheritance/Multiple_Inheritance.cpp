#include <iostream>
 
using namespace std;

// this is Multiple Inheritance

class Student {
    public:
    string name;
     int rollno;
};

class Teacher {
    public:
    string subject;
     double salary;
};

class TA : public Student, public Teacher {

};
 
int main()
{
    TA s1;
    s1.name = "Tony Stark";
    s1.rollno = 34;
    s1.subject = "Chemistry";
    s1.salary = 25000;
    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.subject<<endl;
    cout<<s1.salary<<endl;
    return 0;
}