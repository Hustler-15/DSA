/*<--------------------Pattern5--------------------------->

                          123
                          456
                          789

<---------------------------------------------------------->

For n = 3
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
        while(col<=num)
        {
            cout<<val;
            val+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
};