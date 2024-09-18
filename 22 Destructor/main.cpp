#include <iostream>
 
using namespace std;

class Student {
    public:
     string name;
    double* cgpaPtr;

     Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
     }

//   Destructor
    ~Student(){
        cout<<"He, Iam delete everithing";
        delete cgpaPtr; // delete dynamic allocated Memory
    }

     void getinfo(){
        cout<<"Name is "<<name<<endl;
        cout<<"CGPA is "<<*cgpaPtr<<endl;
     }
};
 
int main()
{
    Student frk1("Farhad Rahimi KLie", 8.9);
    frk1.getinfo();
    return 0;
}