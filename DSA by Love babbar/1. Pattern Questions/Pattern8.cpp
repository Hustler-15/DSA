/*<--------------------Pattern8--------------------------->

                          1
                          2 3
                          4 5 6
                          7 8 9 10
                          11 12 13 14 15


<---------------------------------------------------------->

For n = 5
*/
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a Number"<<endl;
    cin>>num;
    
    int val = 1;
    int row = 1;
    while (row<=num)
    {
        int col = 1;
        while(col<=row)
        {
            cout<<val<<" ";
            val+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
};