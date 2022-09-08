/*<--------------------Pattern7--------------------------->

                          1
                          22
                          333
                          4444
                          55555

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
    {
        int col = 1;
        while(col<=row)
        {
            cout<<row;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
};