/**
 * [LV]
 * Izveidot programmu, kas ievadīto vārdu izvada sākot no beigām pa 1 simbolam katrā rindā.
 *
 * [ENG]
 * Create software that allows to enter your name and outputs each individual letter in a new line
 * in reverse order
 */

#include <iostream>
using namespace std;

int main() {
	string name;

	cout  << "Please enter your name: ";
	cin >> name;

	for ( int i = name.length()-1; i >= 0; i-- ) cout << name[i] << "\n";

	return 0;
}