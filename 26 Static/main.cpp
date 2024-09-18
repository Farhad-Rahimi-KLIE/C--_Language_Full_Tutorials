#include <iostream>
 
using namespace std;
// Static Variables
// void fun(){
//     static int x = 0; // init statement 1 run
//     cout<<"x : "<<x<<endl;
//     x++;
// }

// static object
class A{
    public:
     int x;

     void incX(){
        x = x+1;
     }
};
 
int main()
{
    // static variables
    // fun();
    // fun();
    // fun();

    // static object
    A obj1;
    A obj2;

    obj1.x = 100;
    obj2.x = 200;

    cout<<obj1.x<<endl;
    return 0;
}