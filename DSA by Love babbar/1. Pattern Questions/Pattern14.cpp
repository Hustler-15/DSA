/* <----------------------Pattern14------------------------------>
       
                         A B C
                         B C D
                         C D E
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

    int row = 1;
    while (row<=num)
    {   char ch = 65;
        int col = 1;
        while(col<=num)
        {   char val = ch+row+col-2;
            cout<<val;
            col+=1;
           
        }
        cout<<endl;
        row+=1;
    }
    return 0;
};