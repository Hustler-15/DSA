/*<--------------------Pattern10--------------------------->

                          1
                          2 1
                          3 2 1
                          4 3 2 1

<---------------------------------------------------------->

For n = 4
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
            cout<<row-col+1<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
};