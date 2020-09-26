/**
 * [LV]
 * Saskatīt cik vārdu ir teikumā.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

	string text;
	int word_count = 0;
	bool word_started = false;

	cout << "Ievadiet tekstu: ";
	getline( cin, text );

	int max_index = text.size()-1;

	for ( int i = 0; i <= max_index; i++ ) {
		if ( ' ' != text[i] ){
			word_started = true;
		} else if ( word_started ) {
			word_started = false;
			word_count++;
		}

		// If word started but end of array
		if ( i == max_index && word_started ) word_count++;
	}

	cout << "Vārdi kopā: " << word_count;
	return 0;
}