#include <iostream>
 
using namespace std;

class Student {
    public:
     string name;
    //  double cgpa;  // stack memory allocation or Static Memory
    double* cgpaPtr; // Heap Memory Allocation or Dynamic memory

     Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
     }

     Student(Student &obj){ // Custom Copy Constructor
     cout<<"Custom Shallow Copy Constructor"<<endl;
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
     }

     void getinfo(){
        cout<<"Name is "<<name<<endl;
        cout<<"CGPA is "<<*cgpaPtr<<endl;
     }
};
 
int main()
{
    Student frk1("Farhad Rahimi KLie", 8.9);
    Student frk2(frk1);
    frk1.getinfo();
      // Shallow Copy
    *(frk2.cgpaPtr) = 9.2;
    frk1.getinfo();


    // frk2.getinfo();
    return 0;
}