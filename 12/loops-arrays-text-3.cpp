/**
 * [LV]
 * Izvadīt ievadīto vārdu tik reizes, cik vārdā ir simbolu;
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;

	cout << "Ievadiet tekstu: ";
	getline( cin, text );

	for ( int i = 0; i < text.size(); i++ ) {
		cout << text << "\n";
	}

	return 0;
}