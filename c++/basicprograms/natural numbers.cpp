/*c++ program on sum of first 10 natural numbers*/

#include<iostream>
using namespace std;

int main()
{
    int i , sum;
    sum = 0;
    
    for (i = 1 ; i <= 10 ; i++)
    {
        sum = sum + i ;
    }
    cout<<" sum of first 10 natural numbers is "<<sum <<endl;
    
    return 0;
}