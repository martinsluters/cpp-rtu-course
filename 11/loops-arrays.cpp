/**
 * [LV]
 * Aizpildīt divdimensija masīvu ar gadījuma
 * skaitļiem no -5 līdz 5 un aprēķināt masīva elementu summu.
 */

#include <iostream>
using namespace std;

int main() {
	srand( time( NULL ) );
	int total_sum = 0, arr_len = 10, array[ arr_len ][ arr_len ], i, j;

	for ( i = 0; i < arr_len; i++ ) {
		for ( j = 0; j < arr_len; j++ ) {
			array[i][j] = rand() % 11 - 5;
			cout << array[i][j] << "\t";
			total_sum += array[i][j];
		}
		cout << "\n";
	}

	cout << "\n\n";

	cout << "Kopējā 2D masīva elementu summa ir: " << total_sum;

	return 0;
}