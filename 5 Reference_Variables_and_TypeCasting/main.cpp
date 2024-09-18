#include <iostream>
 
using namespace std;

int c = 100;
 
int main()
{
    // int c = 10;
    // cout<<"local variable c is "<<c<<endl;
    // cout<<"global variable c is "<<::c<<endl; //Scope Resolution Operator

// by Default decimal number like 34.5 in c++ is double you specifie what type of variable you are use
// float d = 34.5f;
// long double e = 34.5l;
// cout<<"value of d is "<<d<<endl<<"value of e is "<<e;

//   float d = 34.6; // by default compilar accept it as double 
//   long double e = 34.5; // by default compilar accept it as double
//   float d = 34.6f; now iam make float
// long double e = 34.5l; now i am make is long double

cout<<"size of 34.6 is "<<sizeof(34.6)<<endl;
cout<<"size of 34.6f is "<<sizeof(34.6f)<<endl;
cout<<"size of 34.5 is "<<sizeof(34.5)<<endl;
cout<<"size of 34.5l is "<<sizeof(34.5l)<<endl;


// ****** TypeCasting ******
int a = 45; float b = 34.5;
cout<<"The number is "<<(float)a;
cout<<"The number is "<<(int)b;

    return 0;
}