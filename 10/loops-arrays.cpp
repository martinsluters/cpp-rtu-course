/**
 * [LV]
 *
 * Masīvu aizpildīt ar gadījuma skaitļiem no -10 līdz 10 un saskaitīt cik negatīvu un pozitīvu skaitļu
 */

#include <iostream>
using namespace std;

int main() {

	srand( time( NULL ) );

	int arr_len = 10, array[ arr_len ], zerro_count = 0, gt_zerro_count = 0, lt_zerro_count = 0;

	for ( int i = 0; i < arr_len; i++ ) {
	    array[i] = rand() %  21 - 10;
	    if ( array[i] > 0 ) {
	    	gt_zerro_count++;
	    } else if ( array[i] < 0 ) {
	    	lt_zerro_count++;
	    } else {
	    	zerro_count++;
	    }
	    cout << array[i] << "\t";
	}

	cout << "Negatīvo skaitļu skaits masīvā: " << lt_zerro_count;

	cout << "\n\n";

	cout << "Pozitīvo skaitļu skaits masīvā: " << gt_zerro_count;

	cout << "\n\n";

	cout << "Nulle skaits masīvā: " << zerro_count;

	return 0;
}