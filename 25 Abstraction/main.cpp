#include <iostream>
 
using namespace std;

// Abstraction ->
class Shape { // abstract class
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape{
    public:
     void draw(){
        cout<<"Durawing a circle \n";
     }
};
 
int main()
{
    Circle s1;
    s1.draw();
    return 0;
}