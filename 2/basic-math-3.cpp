#include <iostream>

using namespace std;

// Y=(a+b)/(a-b)
int main()
{
    //Y=(a+b)/(a-b)
    float Y,a,b;
    cout<<"Ievadiet divus skaitļus, kuri nav vienādi:\n";
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    //while(  a == b ){ is the same as following in a way
    while(  0 == a-b ){
        cout<<"Dalīt ar 0 nav iespējams. Ievadiet vēlreiz a un b\n";
        cout<<"a: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;
    }
    Y =(a+b)/(a-b);
    cout<<"Y: "<<Y<<"\n";
    cout<<"("<<a<<"+"<<b<<")/("<<a<<"-"<<b<<")="<<(a+b)/(a-b);
    return 0;
}