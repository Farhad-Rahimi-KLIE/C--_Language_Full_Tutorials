#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
    // ****** Constants ******
    // const int a = 3;
    // a = 5; // this way is take a error
    // cout<<a;


    // ****** Manipulator ******
    // int a = 3; int b = 78; int c = 6;
    // cout<<"Without setw a "<<a<<endl;
    // cout<<"Without setw b "<<b<<endl;
    // cout<<"Without setw c "<<c<<endl;

    // cout<<"With setw a "<<setw(4)<<a<<endl;
    // cout<<"With setw b "<<setw(4)<<b<<endl;
    // cout<<"With setw c "<<setw(4)<<c<<endl;


    // ****** Operator Precedence ******
    int a = 3;
    int b = 4;
    int c = (a*b) +b;
    cout<<c;
    return 0;
}