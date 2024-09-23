#include <iostream>
#include <vector>
 
using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<"Displaying this Vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
 
int main()
{
    // Ways to Create a vector
    vector <int> vec1; // Zero length vector
    vector <char> vec2; // 4- element character vector
    // vec2.push_back('5');
    // display(vec2);

    vector <char> vec3; // 4 element character vector from vec2
    // display(vec3);
    vector <int> vec4(6, 3); // 6 element vector of 3s
    display(vec4);
    cout<<vec4.size();

    // int element, size;
    // cout<<"Enter the size of Your Vector"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector"<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // // vec1.pop_back(); // pop_back is remove one element from last

    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,3, 344);
    // display(vec1);
    
    return 0;
}