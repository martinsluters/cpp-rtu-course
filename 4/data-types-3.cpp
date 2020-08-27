/**
 * Simple example of cmath lib usage
 */
#include <iostream>
#include <cmath>

using namespace std;

// Y= 3* sqrt(5-a)/(b-7);
// and round to 3 decimals
void process_questions() {
    float a, b, raw_result;
    cout << "Ievadiet jebkurus divus skaitļus no kuru starpības aprēķināt kvadrātsakni: " << endl;
    cout << "a: ";
    cin >> a;

    while ( 5 < a ) {
        cout << "Kavdrātsakne no negatīva skaitļa nev iespējams aprēķināt vienādojumā X=sqrt(5-a), kur a = " << a << ", ievadiet a vēlreiz: " << endl;
        cout << "a: ";
        cin >> a;
    }

    cout << "b: ";
    cin >> b;

    while ( 7 == b ) {
        cout << "Dalīt ar nulli nav iespējams vienādojumā X=(b-7), kur b = " << b << ", ievadiet b vēlreiz: " << endl;
        cout << "b: ";
        cin >> b;
    }
    raw_result = 3 * sqrt(5-a)/(b-7);

    cout << round( raw_result * 1000 ) / 1000 << endl << endl;
}

int main() {
    process_questions();

    return 1;
}