/*c++ program on sum and average of numbers*/
#include<iostream>
using namespace std;

int main()
{
    int i = 0 , sum =0 , x;
    int avg=0;
    
    while(1)
    {
        cin>>x;
        if(x < 0)
        goto result;
        sum = sum + x;
        i++;
        
    }
    result :
    cout<<"sum is "<<sum<<endl;
    avg = sum / i;
    cout<<"average is "<<avg<<endl;
    
    return 0;
}