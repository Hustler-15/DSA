#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{   //Base case
    if(size == 0)
    {
        return false;
    }

    //processing
    if(arr[0] == key)
    {
        return true;
    }
    //Recursive relation
    else{
       bool ans =  linearSearch(arr+1, size-1, key);
       return ans;
    }
}

int main()
{
    int arr[5];
    int key;
    cin>>key;
    for(int i = 0;i<5;i++)
    {
        cin>>arr[i];
    }
    int ans = linearSearch(arr, 5, key);
    if(ans)
     cout<<ans<<endl;
    else
     cout<<"Not found"<<endl; 
}