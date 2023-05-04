/* <----------------------Pattern13------------------------------>
       
                        A B C
                        D E F
                        G H I

<---------------------------------------------------------------->
for n=3
*/
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a Number"<<endl;
    cin>>num;
    char ch = 65;
    int row = 1;
    while (row<=num)
    {
        int col = 1;
        while(col<=num)
        {
            cout<<ch<<" ";
            col+=1;
            ch+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
};