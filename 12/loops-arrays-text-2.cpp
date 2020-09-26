/**
 * [LV]
 * Izvada tekstu pretējā secībā;
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

	string text;

	cout << "Ievadiet tekstu: ";
	getline( cin, text );

	int max_index = text.size()-1;

	for( int i = max_index; i >= 0; i-- ) {
		if ( ' ' == text[i] ) {
			// Lets not print multiple new lines
			if ( max_index < text[ i+1 ] && ' ' != text[ i+1 ] ) {
				cout << "\n";
			}
			continue;
		}
		cout << text[i];
	}

	return 0;
}