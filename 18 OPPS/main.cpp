#include <iostream>
#include <string>
 
using namespace std;

class Teacher {
    // Properties or Attributes
  private:
     double salary;
  public:
// Methods or member functions
       string name;
       string subject;
       string dept;
 void changeDepartment(string newdept){
    dept = newdept;
 }
//  setter
 void setSalary(double sal){
    salary = sal;
 }
//  getter
 double getSalary(){
    cout<<salary;
    return salary;
 }

     
};
 
int main()
{
    // Now create the object of teacher class
    Teacher frk;

    // frk.name = "farhad Rahimi Klie";
    // frk.subject = "Chemistry";
    // frk.dept = "Computer Science";
    // frk.changeDepartment("Social Media");
    // cout<<frk.name<<endl;
    // cout<<frk.subject<<endl;
    // cout<<frk.dept<<endl;
    frk.setSalary(25000);
    frk.getSalary();
    return 0;
}