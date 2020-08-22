/*c++ program on simple calculator*/

#include<iostream>
using namespace std;

int main()
{
    int a , b , add , substarct , multiply , divide , reminder ;
    cout<<"enter the values of a and b "<<endl;
    cin>>a>>b;
    char ch;
    cout<<"enter the symbol + , - , * , /, % "<<endl;
    cin>>ch;
    
    add =  a + b;
    substarct = a - b;
    multiply = a * b;
    divide = a / b;
    reminder = a % b ;
    
    switch(ch)
    {
        case '+' : cout<<" addition of a and b is "<<add<<endl;
        break;
        case '-' : cout<<"substarction of a - b is "<<substarct<<endl;
        break;
        case '*' : cout<<"multiplication of a*b is "<<multiply<<endl;
        break;
        case '/' : cout<<"division of a / b is "<<divide<<endl;
        break;
        case '%' : cout<<"reminder of a % b is "<<reminder<<endl;
        break;
    }
    return 0;
}