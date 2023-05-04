#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
   int start = 0;
   int end = size-1;
   while(start<=end)
   {
     swap(arr[start],arr[end]);
     start++;
     end--;
   }
}

void printarray(int arr[],int size)
{
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int num[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(num, 6);
    reverse(brr, 5);

    printarray(num,6);
    printarray(brr,5);

    
}