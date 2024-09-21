#include <iostream>
 
using namespace std;
// Class Templates with multiple parameters (one, two, three, and more...);
// template <class 1, class T2> (comma saparated);

template <class T1, class T2>

class MyClass{
    public:
     T1 data1;
     T2 data2;

     MyClass(T1 a, T2 b){
        data1 = a;
        data2 = b;
     }

     void display(){
        cout<<this->data1<<endl<<this->data2;
     }
};
 
int main()
{
    MyClass<int, float> obj(1, 4.66);
    obj.display();
    return 0;
}