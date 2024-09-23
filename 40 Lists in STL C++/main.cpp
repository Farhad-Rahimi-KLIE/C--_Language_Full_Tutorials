#include <iostream>
#include <list>
 
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it= lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
 
int main()
{
    list<int> list1; // List of 0 length
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(9);
    list1.push_back(7);
    list1.push_back(5);
    display(list1);
    // // list1.pop_back(); // remove last
    // list1.pop_front(); // remove first
    // list1.remove(3); // remove any of index you give

    // sort the list
    // list1.sort();
    // display(list1);

    // Reverse the List
    list1.reverse();
    display(list1);

    list<int> list2(4); // Empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"After merge ";
    display(list1);






    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<<*iter;
    // // iter++;
    // // cout<<*iter;
    return 0;
}