/*C++ program on relational operators*/

#include <iostream>
using namespace std;

int main()
{
    int a ,b , op1 ,op2 , op3 , op4 ;
    cout << "enter the value of a and b"<<endl;
    cin >> a >> b ;
    cout << "values of a is "<<a<<" and "<<b<<endl;
    
    if (a>b)
    {
        cout<<"a is greater than b  a>b"<<endl;
    }
    if(a<b)
    {
        cout<<"b is greater then a  a<b"<<endl;
    }
    if(a==b)
    {
        cout<<"a and b both are equal a==b"<<endl;
    }
    if (a <= b)
    {
        cout<<"a is lesser than or equal to b"<<endl;
    }
    if (a >= b)
    {
        cout<<"a is graeter than or equal to b"<<endl;
    }
    if (a != b)
    {
        cout<<"a is not equal to b"<<endl;
    }
    
    
    return 0;
}