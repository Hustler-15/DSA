/* <----------------------Pattern18------------------------------>
       
                         D 
                         C D
                         B C D
                         A B C D

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
        while(col<=row)
        {   char ch = 65+num-row+col-1;
            cout<<ch;
            col+=1;
           
           
        }
        cout<<endl;
        row+=1;
    }
    return 0;
};