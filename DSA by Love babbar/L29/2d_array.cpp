#include<iostream>
using namespace std;

int main()
{   int row,col;
    cin>>row;
    cin>>col;
    //Creating 2d array
    int** arr = new int* [row];
    for(int i = 0;i<row;i++)
    {
        arr[i] = new int[col];
    }

    //Taking input
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    //whenever we allocate memory in heap we have deallocate it manually
    //releasing memory
    for(int i = 0;i<row;i++)
    {
        delete [] arr[i];
    }
    delete [] arr;

    //https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118785/offering/1381146

}