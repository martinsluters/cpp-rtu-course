/**
 * [LV]
 *
 * Masīvu aizpildīt ar atzīmēm un saskaitīt cik kādas atzīmes ir
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
			cout << "Atzīme " << i << " kopā ir " << new_new_array[i] << " reizes\n";
		}
	}

	return 0;
}