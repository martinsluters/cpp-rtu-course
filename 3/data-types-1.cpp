/**
 * Simple example of cmath lib usage
 */
#include <iostream>
#include <cmath>

using namespace std;

void process_sqrt() {
    float x;
    cout << "Ievadiet jebkuru skaitli no kura aprēķināt kvadrātskani: ";
    cin >> x;
    while ( 0 > x ) {
        cout << "Kavdrātsakne no negatīva skaitļa nev iespējams aprēķināt, ievadiet skaitli vēlreiz: " << endl;
        cin >> x;
    }
    cout << "Kvadrātsakne no " << x << " ir " << sqrt( x ) << endl << endl;
}

int main() {
    string continue_process = "ja";
    bool first_attempt = true;
    while (
        "ja" == continue_process
    ) {
        if ( first_attempt ) {
            process_sqrt();
            first_attempt = false;
        } else {
            cout << "Turpināt programmu (ja/ne)?" << endl;
            cin >> continue_process;
            if ( "ja" == continue_process ) {
                process_sqrt();
            }
        }
    }

    return 1;
}