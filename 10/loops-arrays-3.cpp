/**
 * [LV]
 *
 * Masīvu aizpildīt ar gadījuma skaitļiem no -10 līdz 10
 * un izveidot jaunu masīvu ar vērtībām -1, ja negatīvs skaitlis, 0,
 * ja nulle un +1, ja pozitīvs skaitlis. Noteikt skaitu, cik negatīvu, cik pozitīvu un cik nulles.
 */

#include <iostream>
using namespace std;

int main() {

	srand( time( NULL ) );

	int arr_len = 10, array[ arr_len ], new_new_array[11] = {0,0,0,0,0,0,0,0,0,0,0}, zerro_count = 0, gt_zerro_count = 0, lt_zerro_count = 0;

	for ( int i = 0; i < arr_len; i++ ) {
	    array[i] = rand() %  11;
	    new_new_array[ array[i] ]++;
	    cout << array[i] << "\t";
	}

	cout << "\n\n";

	for ( int i = 0; i < 11; i++ ) {
		if ( new_new_array[i] ) {
			cout << i << ":" << new_new_array[i] << "\t";
		}
	}

	return 0;
}