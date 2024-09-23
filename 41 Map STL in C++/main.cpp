#include <iostream>
#include <map>
#include <string>
 
using namespace std;
// Map is an associative array
int main()
{
    map<string, int> markMap;
    markMap["Farhad"] = 97;
    markMap["Almas"] = 12;
    markMap["Fawad"] = 53;

    // markMap.insert({{"Kozen", 65},{"kuzoo",23}});
    map<string, int> :: iterator iter;
    for (iter = markMap.begin(); iter!=markMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size is"<<markMap.size()<<endl;
    cout<<"The max size is"<<markMap.max_size()<<endl;
    cout<<"The empty return value is"<<markMap.empty()<<endl;
    return 0;
}