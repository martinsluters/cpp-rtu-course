/*
*
* 3. Lietotājs ievada teikumu, programma izdrukā katrā rindiņā pa
* diviem simboliem, pa diognāli.
*/

#include <iostream>
#include <string>
using namespace std;

void maybe_print_spaces( int num_spaces ) {
    if( 0 == (num_spaces+1) % 2 ) {
        cout << "\n";
        while ( num_spaces ) {
            cout << " ";
            num_spaces--;
        }
    }
}

int main() {

    string text;

    cout << "Ievadiet teikumu: ";
    getline( cin, text );

    for ( int i = 0; i < text.size(); i++ ) {
        cout << text[i];
        maybe_print_spaces( i );
    }

    return 0;
}