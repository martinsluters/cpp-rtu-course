/**
 * Simple example of cmath lib usage
 */
#include <iostream>
#include <cmath>

using namespace std;

void process_round_sqrt() {
    float x;
    cout << "Ievadiet jebkuru skaitli no kura aprēķināt kvadrātskani (skaitlis tiks noapaļots): ";
    cin >> x;
    while ( 0 == x ) {
        cout << "Kavdrātsakne no 0 nev iespējams aprēķināt, ievadiet skaitli vēlreiz: " << endl;
        cin >> x;
    }
    cout << "Noapaļota kvadrātsakne no " << x << " ir " << round( sqrt( x ) ) << endl << endl;
}

int main() {
    process_round_sqrt();

    return 1;
}