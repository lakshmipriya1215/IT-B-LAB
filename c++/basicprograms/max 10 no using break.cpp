/*c++ program on sum of max 10 numbers loop terminates when negative no is added*/

#include<iostream>
using namespace std;

int main()
{
    int i=0,x,sum=0;
    while (i < 10)
    {
        cin>>x;
        
        if(x < 0)
        break;
        sum = sum + x ;
        i++;
    }
    cout<<"sum is"<<sum<<endl;
    
    return 0;
    
}