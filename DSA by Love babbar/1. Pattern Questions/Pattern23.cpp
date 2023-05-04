/* <----------------------Pattern23------------------------------>
       
                         1
                       1 2 1
                     1 2 3 2 1
                   1 2 3 4 3 2 1  


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
    {   // For space
        int space = num-row;
        while(space)
        {
            cout<<' ';
            space-=1;
        }
        
        /* For
               1
              12
             123
            1234   
            */

        int col = 1;

        while(col<=row)
        {   
            cout<<col;
            col+=1;
           
           
        }

        /*
             
             1
             2 1
             3 2 1
             */
        int var=row-1;
        while(var)
        {
            cout<<var;
            var-=1;
        }    
        cout<<endl;
        row+=1;
    }
    return 0;
};