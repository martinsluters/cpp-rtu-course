/**
 * Simple example of cmath lib usage
 */
#include <iostream>
#include <cmath>

using namespace std;

void process_sqrt() {
    float x;
    cout<<"Ievadiet jebkuru skaitli no kura aprēķināt kvadrātskani: ";
    cin>>x;
    while ( 0 == x ) {
        cout<<"Kavdrātsakne no 0 nev iespējams aprēķināt, ievadiet skaitli vēlreiz: \n";
        cin>>x;
    }
    cout<<sqrt( x )<<"\n\n";
}

int main()
{
    string continue_process= "ja";
    bool first_attempt = true;
    while (
        "ja" == continue_process
    ) {
        if ( first_attempt ) {
            process_sqrt();
            first_attempt = false;
        } else {
            cout<<"Turpināt programmu (ja/ne)?\n";
            cin>>continue_process;
            if ( "ja" == continue_process ) {
                process_sqrt();
            }
        }
    }
}