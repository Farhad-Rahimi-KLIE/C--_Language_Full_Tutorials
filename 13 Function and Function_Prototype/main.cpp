#include <iostream>
 
using namespace std;


// Function Prototype
// type  function-name (argument) // function prototype Syntax
int sum(int a, int b); // formal parameters
 
int main()
{
    int num1, num2;

    cout<<"Enter your first number to Sum "<<endl;
    cin>>num1;

    cout<<"Enter your Second number to Sum "<<endl;
    cin>>num2;

    cout<<"Result is "<<sum(num1, num2); // actual arguments

    return 0;
}

int sum(int a, int b){
    int c = a+ b;
    return c;
}