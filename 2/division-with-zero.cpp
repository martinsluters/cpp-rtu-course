#include <iostream>

using namespace std;

// aprekinat Y=a/b
int main()
{
    //Y=a/b
    float a,b;
    float Y;
    cout<<"Ievadiet trīs veselus skaitļus:\n";
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    while(  b == 0 ){
        cout<<"Dalīt ar 0 nav iespējams. Ievadiet vēlreiz\n";
        cout<<"b: ";
        cin>>b;
    }
    Y =a/b;
    cout<<"Y: "<<Y<<"\n";
    cout<<a<<"/"<<b<<"=a/b="<<a/b;
    return 0;
}