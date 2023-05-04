#include<iostream>
using namespace std;

int binary(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<=end)
    {
          //optimization for max integer value 

        if (arr[mid]==key)
        {
            
            return mid;
            
        }

        if(key>arr[mid])
        {
            start = mid+1;
        
        }
        else
        {
           end = mid-1;
        }
        
   
} return 0;
};

int main()
{
    int even[6] = {1,5,10,12,13,27};
    int odd[5] = {7,12,14,19,25};

   int evenindex = binary(even,6,12);
   int oddindex =  binary(odd,5,25);

   cout<<"12 is at "<<evenindex<<endl;

   cout<<"25 is at "<<oddindex<<endl;

   return 0;

   

}