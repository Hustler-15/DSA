/* <----------------------Pattern20------------------------------>
       
                         ****
                         ***
                         **
                         *

<---------------------------------------------------------------->
for n=4
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
        while(col<=(num-row+1))
        {   
            cout<<'*';
            col+=1;
           
           
        }
        cout<<endl;
        row+=1;
    }
    return 0;
};