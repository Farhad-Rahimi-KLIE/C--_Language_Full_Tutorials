#include <iostream>
 
using namespace std;

// Call By Value -> in this case function not be swapped because actual parameter pass the copy of data to formal parameter.

// void Swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
 
// Call By Referece
// void SwapPointer(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// Reference Variables

void SwapReferenceVariables(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    // Call By Value

    // int x = 4;
    // int y = 8;

    // cout<<"Before swap "<<x<<y<<endl;
    // Swap(x,y);
    // cout<<"after swap "<<x<<y<<endl;


    // Call By Reference -> in this swap perform because we pass the main address of actual parameter to formal parameter using Pointers.

    // int x = 4;
    // int y = 8;

    // cout<<"Before swap "<<x<<y<<endl;
    // SwapPointer(&x,&y);
    // cout<<"after swap "<<x<<y<<endl;

    // Reference Variables

    int x = 4;
    int y = 8;

    cout<<"Before swap "<<x<<y<<endl;
    SwapReferenceVariables(x,y);
    cout<<"after swap "<<x<<y<<endl;
    return 0;
}