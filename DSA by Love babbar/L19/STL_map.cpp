#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;

    m[1] = "babbar";
    m[2] = "love";
    m[13] = "kumar";

    //another way to insert
    m.insert({5,"bheem"});
    cout<<"Before erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl; //first bcz to print key and second for values
    }
    
    cout<<m.count(13);

    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl; //first bcz to print key and second for values
    }

    auto it = m.find(5);
    for(auto i= it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }

}