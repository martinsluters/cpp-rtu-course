/**
 * Simple example of cmath lib usage
 */
#include <iostream>
#include <cmath>

using namespace std;

// Y=sqrt(a-b);
void process_questions() {
    float a, b;
    cout << "Ievadiet jebkurus divus skaitļus no kuru starpības aprēķināt kvadrātskani: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    while ( 0 > a - b ) {
        cout << "Kavdrātsakne no negatīva skaitļa nev iespējams aprēķināt vienādojumā Y=sqrt(a-b), kur a = " << a << " un b = " << b << ", ievadiet b vēlreiz: " << endl;
        cin >> b;
    }
    cout << "Kvadrātsakne no " << a - b << " ir " << sqrt( a - b ) << endl << endl;
}

int main() {
    process_questions();

    return 1;
}