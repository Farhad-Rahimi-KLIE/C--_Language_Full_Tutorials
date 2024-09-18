#include <iostream>
 
using namespace std;

// this is Hierarchial Inheritance

class Person {
    public:
     string name;
     int age;
};

class Student : public Person {
    public:
     int rollno;
};

class Teacher : public Person {
    public:
    string subject;
};
 
int main()
{
    Teacher s1;
    s1.name = "Tony Stark";
    s1.age = 34;
    s1.subject = "Chemistry";
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.subject<<endl;
    return 0;
}