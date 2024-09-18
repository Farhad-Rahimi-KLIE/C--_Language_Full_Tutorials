#include <iostream>
 
using namespace std;

// this is Multi Level Inheritance

class Person {
    public:
     string name;
     int age;
};

class Student : public Person {
    public:
     int rollno;
};

class GradeStudent : public Student {
    public:
     string ResearchArea;
};
 
int main()
{
    GradeStudent s1;
    s1.name = "Tony Stark";
    s1.ResearchArea = "Andkhoi";
    cout<<s1.name<<endl;
    cout<<s1.ResearchArea<<endl;
    return 0;
}