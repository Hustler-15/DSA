/* <----------------------Pattern18------------------------------>
       
                  1 2 3 4 5 5 4 3 2 1 
                  1 2 3 4 * * 4 3 2 1
                  1 2 3 * * * * 3 2 1
                  1 2 * * * * * * 2 1
                  1 * * * * * * * * 1
                 

<---------------------------------------------------------------->
for n=5
*/
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int row = 1;
    while(row<=num)
    {
        //For first Triangle
        int col=1;
        while(col<=(num-row+1))
        {
            cout<<col;
            col+=1;
        }
        //For second triangle
        int i=1;
        while(i<=row-1)
        {
            cout<<"*";
            i+=1;
        }
        //For third triangle
        int j = 1;
        while(j<=row-1)
        {
            cout<<"*";
            j+=1;
        }
        //For fourth triangle
        int k = 1;
        while(k<=num-row+1)
        {
            cout<<k;
            k+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}