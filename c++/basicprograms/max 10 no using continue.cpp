/*c++ program on sum of max 10 numbers negative numbers are skipped*/


#include<iostream>
using namespace std;

int main()
{
    int i=0,x,sum=0;
    for( i = 0 ; i < 10 ; i++)
    {
        cin>>x;
        
        if(x < 0)
        continue;
        sum = sum + x ;
    }
    cout<<"sum is"<<sum<<endl;
    
    return 0;
    
}