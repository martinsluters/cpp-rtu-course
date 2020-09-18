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

	int arr_len = 10, array[ arr_len ], flag_array[ arr_len ], zerro_count = 0, gt_zerro_count = 0, lt_zerro_count = 0;

	for ( int i = 0; i < arr_len; i++ ) {
	    array[i] = rand() %  21 - 10;
	    if ( array[i] > 0 ) {
	    	gt_zerro_count++;
	    	flag_array[i] = 1;
	    } else if ( array[i] < 0 ) {
	    	lt_zerro_count++;
	    	flag_array[i] = -1;
	    } else {
	    	zerro_count++;
	    	flag_array[i] = 0;
	    }

	    cout << array[i] << "\t";
	}

	cout << "\n\n";

	for ( int i = 0; i < arr_len; i++ ) {
		cout << flag_array[i] << "\t";
	}

	cout << "\n\n";


	cout << "Negatīvo skaitļu skaits masīvā: " << lt_zerro_count;

	cout << "\n\n";

	cout << "Pozitīvo skaitļu skaits masīvā: " << gt_zerro_count;

	cout << "\n\n";

	cout << "Nulle skaits masīvā: " << zerro_count;

	return 0;
}