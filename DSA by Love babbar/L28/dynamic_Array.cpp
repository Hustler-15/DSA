#include<iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{   
    int n;
    cin>>n;

    //Creating variable size array
    int* arr = new int[n];

    //taking input
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans = getSum(arr, n);

    //case1
    while(true)
    {
        int i = 5;
    }
    //case2 don't run it will crash ur laptop
    while(true)
    {
        int* p = new int;
    }

    //to delete memory in heap
    // delete i;
    //delete []arr;  for array
    return 0;
}