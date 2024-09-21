#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;
 
int main()
{
    // write Functions
    ofstream out;
    out.open("this.txt");
    out<<"This is me";
    // out.close();

    // Read function
    ifstream in;
    string st, st2;
    in.open("this.txt");
    // in>>st>>st2;
    // cout<<st<<st2;
    in.close();


    while (in.eof() == 0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    
    return 0;
}