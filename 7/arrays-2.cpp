#include <iostream>
using namespace std;
int main() {
	srand( time( NULL ) );
	int sum, array_length, multiplication = 1;

	do {
		cout << "Ievadiet masīva izmēru: ";
		cin >> array_length;
	} while ( 0 > array_length );

	int array[array_length];

	for ( int i = 0; i < array_length; i++ ) {
		array[i] = rand() % 16 - 3; //-3 līdz 12
		sum += array[i];
		multiplication *= array[i];
		cout << "array[" << i << "] = " << array[i] << "\n";
	}

	cout << "sum = " << sum << "\n";
	cout << "multiplication = " << multiplication;
	return 0;
}