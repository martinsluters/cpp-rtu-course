#include <iostream>

using namespace std;

int main() {
	int i, k, s;
	cout << "Ievadiet maksimālo skaitu: ";
	cin >> k;

	cout << "Ievadiet iterācijas soli: ";
	cin >> s;


	for ( i=0; i<=k; i+=s ) {
		cout << i << "\n";
	}
	return 1;
}