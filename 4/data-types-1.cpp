/**
 * Simple example of cmath lib usage
 */
#include <iostream>
#include <cmath>

using namespace std;

// Y=sqrt(a-b);
void process_questions() {
    float a, b, raw_result;
    cout << "Ievadiet jebkurus divus skaitļus no kuru starpības aprēķināt kvadrātskani: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    while ( 0 > a - b ) {
        cout << "Kavdrātsakne no negatīva skaitļa nev iespējams aprēķināt vienādojumā Y=sqrt(a-b), kur a = " << a << " un b = " << b << ", ievadiet b vēlreiz: " << endl;
        cout << "b: ";
        cin >> b;
    }
    raw_result = sqrt( a - b );
    cout << "Kvadrātsakne no " << a - b << " ir " << raw_result << endl << endl;
    cout << "Noapaļota kvadrātsakne līdz veselam skaitlim no " << a - b << " ir " << round( raw_result ) << endl << endl;
    cout << "Noapaļota kvadrātsakne līdz vienai decimāldaļai no " << a - b << " ir " << round( raw_result * 10 ) / 10 << endl << endl;
}

int main() {
    process_questions();

    return 1;
}