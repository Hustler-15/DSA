#include<iostream>
using namespace std;

int main()
{
    char name[20];
    cin>>name;

    name[2] = '\0';    //It will add null char to 2nd index and print till 1

    cout<<"Your name is "<<name<<endl;

    return 0;
}