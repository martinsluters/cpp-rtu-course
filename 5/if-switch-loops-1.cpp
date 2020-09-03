#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
    char a;

    do {
        cout << "Ievadiet burtu: \n";
        cin >> a;
    } while ( ! isalpha( a ) );

    switch( toupper( a ) ) {
        case 'A' :
        case 'B' :
            cout << "Ievadīts A vai B";
            break;
        default :
            cout << "Nav burts A vai B";
    }

    return 1;
}