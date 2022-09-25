#include<iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
   for(int i = 0;i<size;i++)
   {
    if (arr[i] == key)
    {
        return 1;
        break;
    }
   }
   return 0;
}

int main()
{
    int num[10] = {12,10,-2,0,8,100,23,69,9,1};
    cout<<"Enter a number to be searched"<<endl;
    int key;
    cin>>key;

    bool found = search(num,10,key);
    if (found)
    {
        cout<<endl<<"Key is present";
    }
    else{
        cout<<endl<<"Key is absent";
    }
    
}