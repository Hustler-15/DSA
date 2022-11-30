#include<iostream>
using namespace std;

int sumArray(int arr[],int size)
{   int ans = 0;
    //Base case
    if(size == 0)
    {
        return 0;
    }

    if(size == 1)
    {
        return arr[0];
    }
    //Recursive relation
    else
    {
        ans = arr[0]+ sumArray(arr+1, size-1);
        return ans;
    }
}

int main()
{
    int arr[5];
    for(int i = 0;i<5;i++)
    {
        cin>>arr[i];
    }
    int ans = sumArray(arr, 5);
    cout<<ans<<endl;
}