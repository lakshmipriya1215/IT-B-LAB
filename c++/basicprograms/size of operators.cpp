/*c++ program on size of data types*/

#include<iostream>
using namespace std;

int main()
{
    int a;
    float b;
    char c;
    cout<<"enter the integer a ,float b, character c"<<endl;
    cin>>a>>b>>c;
    
    cout<<"size of integer is "<<sizeof(a)<<endl;
    cout<<"size of float is "<<sizeof(b)<<endl;
    cout<<"size of character is "<<sizeof(c)<<endl;
    return 0;
    
}