/**
 * [LV]
 * Izvada vārdu pa burtiem
 */

#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int main() {

	string text;

	cout << "Ievadiet tekstu: ";
	getline( cin, text );

	for( int i = 0; i < text.size(); i++ ) {
		cout << text[i] << "\n";
		usleep( 20000 * i );
	}

	return 0;
}