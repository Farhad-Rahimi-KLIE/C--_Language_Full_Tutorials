#include <iostream>
 
using namespace std;

// this is Single Inheritance

class Person {
    public:
     string name;
     int age;

     Person(string name, int age){ // Parameterzaid Constructor
        this->name = name;
        this->age = age;
     }

    //  void getInfo(){
    //     cout<<"My name is "<<name<<endl;
    //     cout<<"My Age is "<<age<<endl;
    //  }

    // ~Person(){ // Destructor
    //     cout<<"Person Destructor"<<endl;
    // }

    // Person(){ // NON-Parameteraized Constructor
    //     cout<<"Person Constructor"<<endl;
    // }
};

class Student : public Person { // Inheritance // Syntax class Student : mode (public, private, protacted) Person
    public:
     int rollno;

     Student(string name, int age, int rollno) : Person(name, age){ // Parameteraized Constructor passed in child class Constructor
        cout<<"Iam Student Constructor"<<endl;
        this->rollno = rollno;
     }

    //  ~Student(){ // Destructor
    //     cout<<"Iam Student Destuctor"<<endl;
    //  }
   
     void getInfo(){
        cout<<"My name is "<<name<<endl;
        cout<<"My Age is "<<age<<endl;
        cout<<"My Rollno is "<<rollno<<endl;
     }
};
 
int main()
{
    Student frk("Farhad Rahimi KLie", 34, 56);
    frk.getInfo();
    return 0;
}