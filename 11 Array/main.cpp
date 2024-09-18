#include <iostream>
 
using namespace std;
 
int main()
{
    // One Way to do this

    int marks[5] = {1,2,3,4,5};
    // cout<<"your marks is "<<marks[0]<<endl;   
    // cout<<"your marks is "<<marks[1]<<endl;  

    // Two Way to do this

    // int marks[3];
    // marks[0] = 34;
    // marks[1] = 19;
    // marks[2] = 43;

    // // cout<<"all marks is "<<marks[0];
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }


// ****** Poniters and Array ******

// int* ptr = marks;
// cout<<*ptr<<endl;
// cout<<*(ptr+1)<<endl;
// cout<<*(ptr+2)<<endl;
// cout<<*(ptr+3)<<endl;
    
    return 0;
}