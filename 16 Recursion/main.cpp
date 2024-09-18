#include <iostream>
 
using namespace std;

    /*
       Recursion have a 2 main Case ->
       1 - The case at which the function doesn't Recur is called the Base Case.
       2 - the instance where the function keeps calling it self to Perform a subtaskis called Recurseve case.
    */

   int factorial(int number){
    if (number == 0 || number == 1)
    {
        return 1;
    }else{
        return number * factorial(number -1);
    }
    
   }
 
int main()
{
    int number;
    cout<<"Enter the number you want to factorial "<<endl;
    cin>>number;
    cout<<"the fatorial of "<<number<<"is "<<factorial(number)<<endl;
    return 0;
}