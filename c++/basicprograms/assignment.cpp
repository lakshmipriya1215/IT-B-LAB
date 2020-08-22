
/*C++ program on assignment operators*/

#include <iostream>
using namespace std;

int main()
{
    int a ,b , operation1 ,operation2 , operation3 , operation4 ;
    cout << "enter the value of a and b"<<endl;
    cin >> a >> b ;
    cout << "values of a is "<<a<<" and "<<b<<endl;
    
    operation1 = b+=a;
    operation2 = b-=a;
    operation3 = b*=a;
    operation4 = b/=a;
    
    cout <<"operation1 b+=a is " << operation1<<endl ;
    cout << "operation2 b-=a is "<< operation2<<endl;
    cout << "operation3 b*=a is "<< operation3<<endl;
    cout << "operation4 b/=a is "<< operation4<<endl;
    
    return 0;
}