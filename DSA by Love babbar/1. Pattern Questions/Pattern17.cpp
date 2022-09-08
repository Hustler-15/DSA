/* <----------------------Pattern17------------------------------>
       
                         A 
                         B C 
                         C D E
                         D E F G

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
        {   char ch = ('A'+row+col-2);
            cout<<ch;
            col+=1;
            ch = ch+1;
           
        }
        cout<<endl;
        row+=1;
    }
    return 0;
};