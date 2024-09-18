#include <iostream>
 
using namespace std;

class Teacher {
  private:
     double salary;
  public:
    string name;
    string dept;
    string subject;

Teacher(){ //Non-parameterized
    dept = "Computer Science";
}
// Make my own Copy Constructor
Teacher(Teacher &orgobj){
    cout<<"Iam make my custom copy constructor";
    this->name = orgobj.name;
    this->dept = orgobj.dept;
    this->subject = orgobj.subject;
}

Teacher(string name, string dept, string subject){ //parameterized and this operator use in this function
    this->name = name; //this->
    this->dept = dept; //this->
    this->subject = subject; //this->
}

void getInfo(){
    cout<<"name is "<<name<<endl;
    cout<<"dept is "<<dept<<endl;
    cout<<"subject is "<<subject<<endl;
}
     
};
 
int main()
{
    Teacher frk("Farhad Rahimi Klie", "Computer Science", "Programming");
    // Teacher frk2(frk); // default Copy Constructor
    Teacher frk2(frk); // custom Copy Constructor
    frk2.getInfo();
    return 0;
}