/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int i, j, rows, gaps;
    rows=8;
    gaps = rows-1;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=gaps; j++)
            cout<<" ";
        gaps--;
        for(j=1; j<=(2*i-1); j++)
            cout<<"*";
        cout<<endl;
    }
    gaps = 1;
    for(i=1; i<=(rows-1); i++)
    {
        for(j=1; j<=gaps; j++)
            cout<<" ";
        gaps++;
        for(j=1; j<=(2*(rows-i)-1); j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}