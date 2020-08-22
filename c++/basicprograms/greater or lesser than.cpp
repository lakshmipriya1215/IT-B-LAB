/*c++ program to relate numbers by using =,>,<*/

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    
    if ( a > b)
    {
        cout<<" a is greater than b a>b "<<endl;
    }
    else if(a < b)
    {
        cout<<" a is lesser than b  a<b "<<endl;
    }
    else if (a == b)
    {
        cout<<" a is equal to b a = b"<<endl;
    }
    return 0;
}