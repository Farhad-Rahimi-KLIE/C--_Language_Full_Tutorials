#include <iostream>
 
using namespace std;

// what is Pointers ? 
// 1 - Pointer is a data type which holds the address of other data types.
// 2 - Program or variables are store in a RAM of Computer.
// 3 - & address of Operator.
// 4 - * Dereference Operator.
 
int main()
{
    int a = 3;
    int* ptr = &a;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<&ptr<<endl;

    // ****** Pointer to Pointer ******
    int** c = &ptr;
    cout<<"Address of ptr"<<ptr<<endl;
    cout<<"Address of ptr"<<c<<endl;
    cout<<"Address of ptr"<<*c<<endl;
    cout<<"Address of ptr"<<**c<<endl;
    return 0;
}