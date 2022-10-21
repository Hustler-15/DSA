#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    //To insert values in set
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for(auto i: s)
    {
        cout<<i<<" ";
    }

    //To delete an element
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    //To check a element is present or not
    s.count(5);

    set<int>::iterator itr = s.find(5); //It returns the iterator of 5 means reference to 5

    for(auto it = itr;it!=s.end();it++)
    {
        cout<<*it<<endl;   
    }
}