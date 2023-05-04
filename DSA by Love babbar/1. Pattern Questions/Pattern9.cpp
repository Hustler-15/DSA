/*<--------------------Pattern9--------------------------->

                          1
                          2 3
                          3 4 5
                          4 5 6 7
                          5 6 7 8 9
                        

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

    int row = 1;
    while (row<=num)
    {    int val = row;
        int col = 1;
        while(col<=row)
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