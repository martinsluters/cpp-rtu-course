/**
 * [LV]
 * Izveidot programmu, kur lietotājs ievada skaitli un vārdu, programma izvada vārdu
 * tik  reizes, kāds skaitlis ir ievadīts.
 *
 * [ENG]
 * Create software that allows to enter your name and number X. The software should output your name
 * X number of times.
 */

#include <iostream>
using namespace std;

int main() {
	int number;
	string name = "";

	cout  << "Please enter your name: ";
	cin >> name;

	cout << "Please enter number: ";
	cin >> number;
	number = abs( number );

	for ( int i = 0; i < number; i++ ) {
		cout << i + 1 << ". " << name << "\n";
	}

	return 0;
}