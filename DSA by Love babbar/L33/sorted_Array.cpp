#include<iostream>
using namespace std;

bool isSorted(int arr[],int size)
{
    //Base case
    if(size == 0 || size ==1)
    {
        return true;
    }

    if(arr[0]>arr[1])
    {
        return false;
    }
    //Recursive relation
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}

int main()
{
    int arr[6];
    for(int i = 0;i<6;i++)
    {
        cin>>arr[i];
    }

    int ans = isSorted(arr, 6);
    if(ans)
    {
        cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Array is not sorted"<<endl;
    }
}