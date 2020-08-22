/*c++ program to add numbers until user enters zero*/

#include<iostream>
using namespace std;

int main()
{
    int sum = 0 , i ;
    while(1)
    {
        cin>>i;
        if ( i == 0)
        {
            break;
        }
        sum = sum + i;
        
    }
    cout<<"the sum is "<<sum<<endl;
    return 0;
}