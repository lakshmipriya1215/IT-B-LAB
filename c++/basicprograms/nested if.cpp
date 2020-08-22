/*c++ program on nested if*/

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the value of a ,b , c"<<endl;
    cin>>a>>b>>c;
    if (a > b )
    {
        if (a > c)
        {
            cout<<"a is greater than b and c"<<endl;
        }
    }    
   if(c > a)
   {
        {
            if( c > b)
            cout<<"c is greater than a and b "<<endl;
        }
    }
    
    if ( b > c)
    {
        if ( b > a)
        {
        cout<<" b is greater than a and c"<<endl;
        }
    }
    return 0;
}