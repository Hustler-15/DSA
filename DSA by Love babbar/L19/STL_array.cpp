#include<iostream>
#include<array>
using namespace std;

int main()
{
    int basic[3] = {1,2,3};   //basic static array

    array<int, 4>a = {1,2,3,4}; //It is implemented using above static array

    int size = a.size();

    for(int i = 0;i<size;i++)
       {
        cout<<a[i]<<endl;
       }

    cout<<"element of 2nd index "<<a.at(2)<<endl;
    cout<<"To check empty or not "<<a.empty()<<endl;   

    cout<<"First element "<<a.front()<<endl;
    cout<<"Last element "<<a.back()<<endl;


}