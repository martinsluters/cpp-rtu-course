/**
 * [LV]
 * Izveidot divdimensija masīvu, kas aizpildīti ar gadījuma skaitļiem.
 * Izveidot jaunu masīvu (transporēto), kas ir apgriezta pirmajam
 * (rindas ar kolonām apmainīta vietām). (Par transponēto matricu sauc matricu AT,
 * kuru iegūst no dotās matricas, rindas elementus mainot vietām ar atbilstošās kolonnas elementiem.)
 */

#include <iostream>
using namespace std;

int main() {
	srand( time( NULL ) );
	int arr_len = 5, array[ arr_len ][ arr_len ], new_array[ arr_len ][ arr_len ], i, j;

    for ( i = 0; i < arr_len; i++ ) {
		for ( j = 0; j < arr_len; j++ ) {
		    array[i][j] = rand() % 5 + 1;
		    new_array[j][i] = array[i][j];
			cout << array[i][j] << "  ";
		}
		cout << "\n";
	}

	cout << "\n\n\n";

	cout << "TRANSPORĒTĀ MATRICA" << "\n\n";
	for ( i = 0; i < arr_len; i++ ) {
		for ( j = 0; j < arr_len; j++ ) {
			cout << new_array[i][j] << "  ";
		}
		cout << "\n";
	}

	return 0;
}