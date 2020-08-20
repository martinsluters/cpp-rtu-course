#include <iostream>

using namespace std;

int main()
{
    //Y=a/(a-b)+1/b
    float Y,a,b;
    cout<<"Ievadiet divus skaitļus, kuri nav vienādi:\n";
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    while ( 0 == b ) {
        cout<<"Dalīt ar 0 nav iespējams. Ievadiet vēlreiz b\n";
        cout<<"b: ";
        cin>>b;
    }
    while ( 0 == (a-b)+1/b ) {
        cout<<"Dalīt ar 0 nav iespējams vienādojumā Y=a/(a-b)+1/b ar mainīgajiem a="<<a<<" b="<<b<<". Ievadiet vēlreiz a un b\n";
        cout<<"a: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;
    }

    Y = a/(a-b)+1/b;
    cout<<"Y: "<<Y<<"\n";
    return 0;
}