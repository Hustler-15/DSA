#include<iostream>
using namespace std;

int sum(int arr[],int size)
{
    int total = 0;
    for(int i =0;i<size;i++)
    {
      total+=arr[i];
    }

    return total;
}

int main()
{
    int size;
    cin>>size;

    int num[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    cout<<"Sum of numbers are :"<<sum(num,size);

}