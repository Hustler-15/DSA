#include<iostream>
using namespace std;

void update2(int& n)
{
    n++;
}

void update1(int n)
{
    n++;
}

int main()
{
    int i = 5;
    
    //Creating reference variable
    int& j = i;

    cout<<i<<endl;
    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;

    int n = 5;
    
    cout<<"Before"<<n<<endl;
    update1(n);
    cout<<"After"<<n<<endl; //value want change bcz we are using passing by value
    
    cout<<"Before"<<n<<endl;
    update2(n);
    cout<<"After"<<n<<endl; // value will change bcz we are performing passing by refernece

    //Never use return type of function as reference variable
}