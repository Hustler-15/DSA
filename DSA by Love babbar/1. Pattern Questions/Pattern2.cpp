/*<--------------------Pattern2--------------------------->

                          111111
                          222222
                          333333
                          444444
                          555555

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
        while(col<=num)
        {
            cout<<row;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
};
