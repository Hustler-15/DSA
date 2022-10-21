#include<iostream>
using namespace std;
#include<stack>

int main()
{
    stack<string> s;

    s.push("love"); //To insert an element
    s.push("Babbar");
    s.push("kumar");

    //To print the top element
    cout<<"top Element "<<s.top()<<endl;

    //To delete the top element
    s.pop();
    cout<<"Top element"<<endl;

    //To check size
    cout<<s.size()<<endl;

    //To check for empty
    cout<<"empty or not "<<s.empty()<<endl;
}