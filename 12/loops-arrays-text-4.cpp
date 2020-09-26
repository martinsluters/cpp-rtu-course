/**
 * [LV]
 * Saskaitīt cik ievadītajā tekstā  ir "a" burtu.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	int a_count = 0;

	cout << "Ievadiet tekstu: ";
	getline( cin, text );

	for ( int i = 0; i < text.size(); i++ ) {
		if ( 'a' == text[i] ) a_count++;
	}

	cout << "Tekstā burts \"a\" atkārtojas " << a_count << " reizes!";

	return 0;
}