#include <iostream>
 
using namespace std;

template <class T1, class T2>
float funcAverage2(T1 a, T2 b){
    float avg = (a + b) / 2.0;
    return avg;
}
 
int main()
{
    float a;
    a = funcAverage2(5,2);
    cout<<"The average of these numbers is "<<a;
    return 0;
}