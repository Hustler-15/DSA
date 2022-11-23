#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col ) //It is always necessary to specify no of col for 2d arr as a parameter
{
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][4], int row, int col)
{
    for(int i = 0;i<row;i++)
    {
        int sum = 0;
        for(int j = 0;j<col;j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}

int largestRowSum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int row_num ;
    for(int i = 0;i<row;i++)
    {
        int sum = 0;
        for(int j = 0;j<col;j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<endl;
        if(sum>maxi)
        {
            maxi = sum;
            row_num = i;

        }
    }
    return row_num;
}

int main()
{   //Creating 2d array
    int arr[3][4];  
    
     //By default it will take input row wise
    int arr1[3][4] = (1,2,3,4,5,6,7,8,9,0,11,12);

    // Entering element in another way
    int arr2[3][4] = {{1,2,3,4},{4,3,2,1},{1,2,3,4}};

    //Taking input -> Row wise
    for(int i = 0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    //Taking input -> column wise
    for(int i = 0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[j][i];
        }
    }

    //Printing
    for(int i = 0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter Element to be searched"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr, target, 3, 4))
    {
        cout<<"Element is present"<<endl;
    
    }
    else
      {
        cout<<"Not Found";
      }
}