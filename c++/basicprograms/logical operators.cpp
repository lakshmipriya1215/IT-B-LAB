/*c++ program on logical operators*/

#include<iostream>
using namespace std;

int main()
{
    int a , b ;
    cout<<"enter the values of a and  b"<<endl;
    cin>>a>>b;
    
    cout<<(a > 10 && a != b)<<endl;
    cout<<(a > 30 && a == b)<<endl;
    cout<<!(a < b && a != b)<<endl;
    
    return 0;
}    
   