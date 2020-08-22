/*C++ program on increment and decrement operators*/

#include <iostream>
using namespace std;

int main()
{
    int a,preincrement ,predecrement , postincrement , postdecrement ;
    cout << "enter the value of a "<<endl;
    cin >> a ;
    cout << "values of a is "<<a<<endl;
    
    preincrement = ++a;
    postincrement = a++ ;
    postdecrement = a--;
    predecrement = --a;
    
    cout << " preincrement of a is " << preincrement<<endl ;
    cout << "predecrement of a is "<< predecrement<<endl;
    cout << "postincrement of a is "<< postincrement<<endl;
    cout << "postdecrement of a is "<< postdecrement<<endl;
    
    return 0;
}