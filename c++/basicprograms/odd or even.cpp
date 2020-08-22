/*c++ program to check the no is odd or even*/

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    
    if ( a % 2 == 0)
    {
        cout<<" a is a even number"<<endl;
    }
    else
    {
        cout<<" a is odd number "<<endl;
    }
    return 0;
}