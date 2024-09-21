#include <iostream>
 
using namespace std;

template <class T1=int, class T2=float, class T3=char>

class Farhad {
    public:
     T1 a;
     T2 b;
     T3 c;

     Farhad(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
     }
     void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
     }
};
 
int main()
{
    Farhad <> f(4, 6.7, 'e');
    f.display();
    cout<<endl;
    Farhad <char, float, char> g('f',4.66, 'k');
    g.display();
    return 0;
}