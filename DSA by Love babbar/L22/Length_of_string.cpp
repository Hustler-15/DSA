#include<iostream>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for(int i = 0;name[i]!='\0';i++)
    {
        count++;
    } 

    return count;
}