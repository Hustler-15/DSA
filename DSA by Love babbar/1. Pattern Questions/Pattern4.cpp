/*<--------------------Pattern4--------------------------->

                          321
                          321
                          321

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

    int row = 1;
    while (row<=num)
    {
        int col = 1;
        while(col<=num)
        {
            cout<<num-col+1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
};