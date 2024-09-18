#include <iostream>
 
using namespace std;
 
//  Function Overloading -> Name Same but work Different.

// Function Overloading example 1:

// int sum(int a, int b){
//     cout<<"Using function with 2 arguments "<<endl;
//     return a+b;
// }
// int sum(int a, int b, int c){
//     cout<<"Using function with 3 arguments "<<endl;
//     return a+b +c;
// }

// Function Overloading example 2:

// int volume(double r, int h){
//     return (3.14 * r * r * h); // calculate volume of Cylinder
// }
// int volume(int a){
//     return (a * a * a); // calculate volume of Cube
// }
// int volume(int l, int b, int h){
//     return (l * b * h); // cal volume of Retangular box
// }

int main()
{
    // function overloading example 1:

    // cout<<"sum of 3 and 6 is "<<sum(3,6)<<endl;
    // cout<<"sum of 3, 5 and 6 is "<<sum(3,5,6)<<endl;


//   function overloading example 2:
    // cout<<"volume of Cylinder is "<<volume(3,5)<<endl;
    // cout<<"volume of cube is "<<volume(5)<<endl;
    // cout<<"volume of retangular box is "<<volume(3,7,9)<<endl;
    return 0;
}