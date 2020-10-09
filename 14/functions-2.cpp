/*
*
* 1. Lietotājs ievada savu vārdu un skaitli N intervālā no 4 līdz 9,
* programma izdrukā ievadīto vārdu N reizes uz ekrāna un pirms tā numuru
* sākot no 9 pēc kārtas. piem., ievadot skaitli 4
* un vārdu Inese iegūst rezultātu: (Cikls For )
*
* 9. Inese
* 8. Inese
* 7. Inese
* 6. Inese
*/

#include <iostream>
using namespace std;

bool is_number_in_range( int number ) {
	return ( number >= 4 && number <= 9 );
}

void capture_name( string& name ) {
	cout << "Lūdzu ievadiet vārdu: ";
	cin >> name;
}

void capture_number( int& number ) {
	cout << "Lūdzu ievadiet skaitli 4 līdz 9: " << endl;
	cin >> number;

    while ( ! is_number_in_range( number ) )
    {
        cout << "Lūdzu ievadiet skaitli 4 līdz 9: \n";
        cin >> number;
        while (!number){
            cout << "Nepareiza ievade. Ievadiet skaitli.\n";
            cin.clear();
            cin.ignore(10000,'\n');
            cin >> number;
        }
    }
    while ( ! is_number_in_range( number ) ) {
        cout << "Nepareiza ievade. Ievadiet skaitli.\n";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> number;
        while ( ! is_number_in_range( number ) ){
            cout << "Lūdzu ievadiet skaitli 4 līdz 9: \n";
            cin >> number;
        }
    }
}

void print_me( string name, int number ) {
	for ( int i = number-1; i >= 0; i-- ) cout << i+1 << ". " << name << "\n";
}

int main() {
	int number;
	string name;

	capture_name( name );
	capture_number( number );
	print_me( name, number );

	return 0;
}