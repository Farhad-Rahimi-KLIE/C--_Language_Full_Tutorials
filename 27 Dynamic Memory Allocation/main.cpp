#include <iostream>
 
using namespace std;
 
int main()
{
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // Dynamic Memory Allocation with new keyword
    // int* p = new int(40); // dynamic memroy allocation
    float* p = new float(40.55); // dynamic memroy allocation
    cout<<"the value at address a is "<<*(p)<<endl;

    // new way to allocate Dynamic memory is ->
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr; // delete Dynamically allocated memory from heap 
    cout<<"value of arr[0] is "<<arr[0]<<endl;
    cout<<"value of arr[1] is "<<arr[1]<<endl;
    cout<<"value of arr[2] is "<<arr[2]<<endl;
    return 0;
}