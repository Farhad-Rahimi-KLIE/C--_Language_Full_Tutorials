#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
    // Conncecting our file with hout stream
    // ofstream hout("this.txt");
    // // Creating a name string and filling it with the string entered by the user
    // cout<<"Enter Your Name"<<endl;
    // string name;
    // cin>>name;
    // // Writing a string to the file
    // hout<<"My name is  "+ name;

    // hout.close();

    ifstream hin("this.txt");
    string content;
    hin>>content;
    cout<<"The content of the file is "<<content;

    hin.close();
    return 0;
}