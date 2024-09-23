#include <iostream>
#include <functional>
#include <algorithm>
 
using namespace std;
 
int main()
{
    // Function object (Functor) : function wrapped in a class so that it available like an object.
    int arr[] = {1,3,4,12,54,2};
    sort(arr, arr +5);
    // sort(arr, arr +6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}